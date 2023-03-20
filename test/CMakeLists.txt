cmake_minimum_required(VERSION 3.24)


set(test_project_name test_${lib_name})

# Set project name
project(${test_project_name}
		DESCRIPTION "${lib_name} tests"
		LANGUAGES CXX
)

add_executable(${test_project_name}
	main.cpp
	hash_32.cpp
	hash_64.cpp
	hash_128.cpp
	hash_256.cpp
)

set_target_properties(${test_project_name}
    PROPERTIES
        CXX_STANDARD 20
        CXX_STANDARD_REQUIRED YES
        CXX_EXTENSIONS NO
)

if(MSVC)
	target_compile_options( ${test_project_name} PRIVATE /Zc:__cplusplus /std:c++20 /bigobj /permissive- /EHsc /utf-8 /arch:AVX2)
elseif()
	target_compile_options( ${test_project_name} PRIVATE -msse4.2 -std=c++20)
endif()

if(SANITIZER)
	if(MSVC)
		if(CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
			# MSVC ASAN is limited
			# https://devblogs.microsoft.com/cppblog/addresssanitizer-asan-for-windows-with-msvc/#compiling-with-asan-from-the-console
			target_compile_options(${test_project_name} PRIVATE /fsanitize=address /INCREMENTAL:NO /Zi)
			target_compile_options(${lib_name} PRIVATE /fsanitize=address /INCREMENTAL:NO /Zi)
			target_compile_definitions(${test_project_name} PRIVATE _DISABLE_VECTOR_ANNOTATION)
			get_filename_component(CMAKE_CXX_COMPILER_PATH ${CMAKE_CXX_COMPILER} DIRECTORY)
			add_custom_command(TARGET ${test_project_name} POST_BUILD 
				COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_CXX_COMPILER_PATH}/clang_rt.asan_dbg_dynamic-x86_64.dll $<TARGET_FILE_DIR:${test_project_name}>
				COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_CXX_COMPILER_PATH}/clang_rt.asan_dynamic-x86_64.dll $<TARGET_FILE_DIR:${test_project_name}>
			)
		endif()
		if( CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
			message( error FATAL_ERROR "ASAN with Clang-cl is not supported")
			# https://github.com/aminya/project_options/issues/138
			# https://stackoverflow.com/questions/66531482/application-crashes-when-using-address-sanitizer-with-msvc
			# https://devblogs.microsoft.com/cppblog/asan-for-windows-x64-and-debug-build-support/
			# https://learn.microsoft.com/en-us/cpp/sanitizers/asan-runtime?view=msvc-170
		endif()
	endif()
	# if(CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")

	# 	# MSVC ASAN is limited
	# 	# https://devblogs.microsoft.com/cppblog/addresssanitizer-asan-for-windows-with-msvc/#compiling-with-asan-from-the-console
	# 	target_compile_options(${test_project_name} PRIVATE /fsanitize=address)
	# 	target_compile_options(${lib_name} PRIVATE /fsanitize=address)
	# 	target_compile_definitions(${test_project_name} PRIVATE _DISABLE_VECTOR_ANNOTATION)
	# 	get_filename_component(CMAKE_CXX_COMPILER_PATH ${CMAKE_CXX_COMPILER} DIRECTORY)
	# 	add_custom_command(TARGET ${test_project_name} POST_BUILD 
	# 		COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_CXX_COMPILER_PATH}/clang_rt.asan_dbg_dynamic-x86_64.dll $<TARGET_FILE_DIR:${test_project_name}>
	# 		COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_CXX_COMPILER_PATH}/clang_rt.asan_dynamic-x86_64.dll $<TARGET_FILE_DIR:${test_project_name}>)
	# endif()
	# if( CMAKE_CXX_COMPILER_ID STREQUAL "Clang" OR CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
	# 	# https://developers.redhat.com/blog/2021/05/05/memory-error-checking-in-c-and-c-comparing-sanitizers-and-valgrind
	# 	target_compile_options(${test_project_name} PRIVATE -fsanitize=address -fsanitize=undefined -fno-sanitize-recover=all -fsanitize=float-divide-by-zero -fsanitize=float-cast-overflow -fno-sanitize=null -fno-sanitize=alignment)
	# 	target_link_options(${test_project_name} PRIVATE -fsanitize=address -fsanitize=undefined -fno-sanitize-recover=all -fsanitize=float-divide-by-zero -fsanitize=float-cast-overflow -fno-sanitize=null -fno-sanitize=alignment)
	# 	target_compile_options(${lib_name} PRIVATE -fsanitize=address -fsanitize=undefined -fno-sanitize-recover=all -fsanitize=float-divide-by-zero -fsanitize=float-cast-overflow -fno-sanitize=null -fno-sanitize=alignment)
	# 	target_link_options(${lib_name} PRIVATE -fsanitize=address -fsanitize=undefined -fno-sanitize-recover=all -fsanitize=float-divide-by-zero -fsanitize=float-cast-overflow -fno-sanitize=null -fno-sanitize=alignment)
	# endif()

endif()


if(COVERAGE AND MSVC)
	if(CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
		set(MSVC_CODECOVERAGE_CONSOLE_PATH "C:\\Program Files\\Microsoft Visual Studio\\2022\\Enterprise\\Common7\\IDE\\Extensions\\Microsoft\\CodeCoverage.Console\\Microsoft.CodeCoverage.Console.exe" CACHE STRING "Path to Microsoft.CodeCoverage.Console.exe")
		find_program(MSVC_CODECOVERAGE_CONSOLE_EXE ${MSVC_CODECOVERAGE_CONSOLE_PATH})
		if(NOT MSVC_CODECOVERAGE_CONSOLE_EXE)
			message(FATAL_ERROR "Code coverage on Windows need Microsoft.CodeCoverage.Console.exe available in Visual Studio 2022 17.3 Enterprise Edition")
		endif()

		target_link_options(${test_project_name} PRIVATE /PROFILE)
		add_custom_command(
			TARGET ${test_project_name} POST_BUILD
			COMMENT "Instrument and Collect ${test_project_name}.exe"
			COMMAND ${MSVC_CODECOVERAGE_CONSOLE_EXE} instrument Debug\\${test_project_name}.exe -s ..\\..\\test\\coverage.runsettings
			COMMAND ${MSVC_CODECOVERAGE_CONSOLE_EXE} collect Debug\\${test_project_name}.exe -o Debug\\coverage.msvc -f cobertura -s ..\\..\\test\\coverage.runsettings
		)
	elseif(CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
		target_compile_options(${test_project_name} PRIVATE -fprofile-instr-generate -fcoverage-mapping)
		target_compile_options(${lib_name} PRIVATE -fprofile-instr-generate -fcoverage-mapping)
		
		# Add clang lib path to libraries paths
		get_filename_component(CMAKE_CXX_COMPILER_PATH ${CMAKE_CXX_COMPILER} DIRECTORY)
		target_link_directories(${test_project_name} PRIVATE "${CMAKE_CXX_COMPILER_PATH}\\..\\lib\\clang\\${CMAKE_CXX_COMPILER_VERSION}\\lib\\windows\\")


		add_custom_command( 
		 	TARGET ${test_project_name} POST_BUILD
		 	COMMENT "Run ${test_project_name}.exe"
			COMMAND Powershell.exe Invoke-WebRequest -Uri https://github.com/mozilla/grcov/releases/download/v0.8.13/grcov-x86_64-pc-windows-msvc.zip -OutFile ./Debug/grcov-x86_64-pc-windows-msvc.zip
			COMMAND Powershell.exe Expand-Archive -Path ./Debug/grcov-x86_64-pc-windows-msvc.zip -DestinationPath ./Debug/
		 	COMMAND ${CMAKE_COMMAND} -E env LLVM_PROFILE_FILE="${lib_name}.profraw" ./Debug/${test_project_name}.exe
			COMMAND ${CMAKE_CXX_COMPILER_PATH}/llvm-profdata merge -sparse ${lib_name}.profraw -o ${lib_name}.profdata
			COMMAND ./Debug/grcov.exe --llvm -t html -b ./Debug/ -s ./../../
					--llvm-path ${CMAKE_CXX_COMPILER_PATH}
					--branch
					--keep-only "src/*" 
					#--keep-only "test/*" 
					#--ignore "test/misc/*" 
					--excl-start "^.*LCOV_EXCL_START.*" 
					--excl-stop "^.*LCOV_EXCL_STOP.*" 
					--excl-line "\"(\\s*^.*GTEST_TEST\\.*)|(^.*LCOV_EXCL_LINE.*)\"" 
					--excl-br-start "^.*LCOV_EXCL_START.*" 
					--excl-br-stop "^.*LCOV_EXCL_STOP.*" 
					--excl-br-line "\"(\\s*^.*GTEST_TEST\\.*)|(^.*LCOV_EXCL_BR_LINE.*)\"" 
					-o windows
					..
			COMMAND ./Debug/grcov.exe --llvm -t lcov -b ./Debug/ -s ./../../
					--llvm-path ${CMAKE_CXX_COMPILER_PATH}
					--branch
					--keep-only "src/*"
					#--keep-only "test/*" 
					#--ignore "test/misc/*" 
					--excl-start "^.*LCOV_EXCL_START.*" 
					--excl-stop "^.*LCOV_EXCL_STOP.*" 
					--excl-line "\"(\\s*^.*GTEST_TEST\\.*)|(^.*LCOV_EXCL_LINE.*)\"" 
					--excl-br-start "^.*LCOV_EXCL_START.*" 
					--excl-br-stop "^.*LCOV_EXCL_STOP.*" 
					--excl-br-line "\"(\\s*^.*GTEST_TEST\\.*)|(^.*LCOV_EXCL_BR_LINE.*)\"" 
					-o coverage.windows.lcov.info
					..
		)

	endif()
elseif(COVERAGE AND CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
	target_compile_options(${test_project_name} PRIVATE -fprofile-instr-generate -fcoverage-mapping)
	target_link_options(${test_project_name} PRIVATE -fprofile-instr-generate -fcoverage-mapping)
	target_compile_options(${lib_name} PRIVATE -fprofile-instr-generate -fcoverage-mapping)
	target_link_options(${lib_name} PRIVATE -fprofile-instr-generate -fcoverage-mapping)

	add_custom_command(
		TARGET ${test_project_name} POST_BUILD
		COMMENT "Run ${test_project_name}.exe"
		COMMAND curl -L https://github.com/mozilla/grcov/releases/latest/download/grcov-x86_64-unknown-linux-gnu.tar.bz2 | tar jxf -
		COMMAND ${CMAKE_COMMAND} -E env LLVM_PROFILE_FILE="${lib_name}.profraw" ./${test_project_name}
		COMMAND llvm-profdata merge -sparse ${lib_name}.profraw -o ${lib_name}.profdata
		COMMAND ./grcov --llvm -t html -b . -s ./../../
				--llvm-path /usr/bin/
				--branch
				--keep-only "src/*" 
				#--keep-only "test/*" 
				#--ignore "test/misc/*" 
				--excl-start "^.*LCOV_EXCL_START.*" 
				--excl-stop "^.*LCOV_EXCL_STOP.*" 
				--excl-line "\"(\\s*^.*GTEST_TEST\\.*)|(^.*LCOV_EXCL_LINE.*)\"" 
				--excl-br-start "^.*LCOV_EXCL_START.*" 
				--excl-br-stop "^.*LCOV_EXCL_STOP.*" 
				--excl-br-line "\"(\\s*^.*GTEST_TEST\\.*)|(^.*LCOV_EXCL_BR_LINE.*)\"" 
				-o ubuntu
				..
		COMMAND ./grcov --llvm -t lcov -b . -s ./../../
				--llvm-path /usr/bin/
				--branch
				--keep-only "src/*"
				#--keep-only "test/*" 
				#--ignore "test/misc/*" 
				--excl-start "^.*LCOV_EXCL_START.*" 
				--excl-stop "^.*LCOV_EXCL_STOP.*" 
				--excl-line "\"(\\s*^.*GTEST_TEST\\.*)|(^.*LCOV_EXCL_LINE.*)\"" 
				--excl-br-start "^.*LCOV_EXCL_START.*" 
				--excl-br-stop "^.*LCOV_EXCL_STOP.*" 
				--excl-br-line "\"(\\s*^.*GTEST_TEST\\.*)|(^.*LCOV_EXCL_BR_LINE.*)\"" 
				-o coverage.ubuntu.lcov.info
				..
	)
endif()


target_precompile_headers(${test_project_name} PRIVATE precompiled.h)

# Add defines
target_compile_definitions(
	${test_project_name}
	PRIVATE
	_HAS_EXCEPTIONS=0
	_CRT_SECURE_NO_WARNINGS
	_UNICODE
	UNICODE
	HD_ABORT_ON_ASSERT
	HD_GLOBAL_NAMESPACE_TYPES
	#Don't use TEST() ans ASSERT_*() macro from google_test which is a too generic name
	GTEST_DONT_DEFINE_TEST=1
	GTEST_DONT_DEFINE_ASSERT_TRUE=1
	GTEST_DONT_DEFINE_ASSERT_FALSE=1
	GTEST_DONT_DEFINE_ASSERT_EQ=1
	GTEST_DONT_DEFINE_ASSERT_NE=1
	GTEST_DONT_DEFINE_ASSERT_LE=1
	GTEST_DONT_DEFINE_ASSERT_LT=1
	GTEST_DONT_DEFINE_ASSERT_GE=1
	GTEST_DONT_DEFINE_ASSERT_GT=1
	# Debug specific compiler flags
	$<$<CONFIG:Debug>:HD_DEBUG>
	# Release specific compiler flags
	$<$<CONFIG:Release>:HD_RELEASE>
	# MinSizeRel specific compiler flags
	$<$<CONFIG:MinSizeRel>:HD_RELEASE>
	# DebugOptimized specific compiler flags
	$<$<CONFIG:RelWithDebInfo>:HD_DEBUGOPTIMIZED>
)

# Add project dependency
target_link_libraries(${test_project_name} PRIVATE ${lib_name})

# Add Google test dependency
message("Fetching HUD-Software/google-test...")
include(FetchContent)
FetchContent_Declare(
	google_test 
	GIT_REPOSITORY  https://github.com/HUD-Software/google-test.git
	GIT_TAG         5306f1a0e51f6001c624588fafdb646bb377866c
)
FetchContent_MakeAvailable(google_test)

target_link_libraries( ${test_project_name} PRIVATE gtest )

# Add the executable test
add_test(NAME ${lib_name} COMMAND ${test_project_name} --gtest_output=xml:${test_project_name}_report.xml --extra-verbose --gtest_break_on_failure)
