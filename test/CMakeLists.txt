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
	target_compile_definitions(${test_project_name} PRIVATE __SSE4_2__)
elseif(EMSCRIPTEN)
	set_target_properties(${test_project_name} PROPERTIES SUFFIX ".html")
	target_link_options(${test_project_name} PRIVATE $<$<OR:$<CONFIG:Debug>,$<CONFIG:RelWithDebInfo>>:-sASSERTIONS>)
	target_compile_options( ${test_project_name} PRIVATE -msse4.2 -msimd128 -std=c++20 )
else()
 	target_compile_options( ${test_project_name} PRIVATE -msse4.2 -std=c++20)
endif()

target_precompile_headers(${test_project_name} PRIVATE precompiled.h)

# Add defines
target_compile_definitions(
	${test_project_name}
	PRIVATE
	_HAS_EXCEPTIONS=0
	_CRT_SECURE_NO_WARNINGS
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
message("Fetching google-test...")
include(FetchContent)
FetchContent_Declare(
	google_test 
	GIT_REPOSITORY  https://github.com/google/googletest.git
	GIT_TAG         v1.13.0
)
# set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
# set(BUILD_SHARED_LIBS ON CACHE BOOL "" FORCED)
set(BUILD_GTEST ON CACHE BOOL "" FORCE)
set(BUILD_GMOCK OFF CACHE BOOL "" FORCE)
set(gtest_build_samples OFF CACHE BOOL "" FORCE)
set(gtest_build_tests OFF CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(google_test)
target_link_libraries( ${test_project_name} PRIVATE gtest )
#add_custom_command(TARGET ${test_project_name} POST_BUILD COMMAND ${CMAKE_COMMAND} -E copy_if_different $<TARGET_FILE:gtest> $<TARGET_FILE_DIR:${test_project_name}>)

# Add the executable test
if(EMSCRIPTEN)
	add_test(NAME ${lib_name} COMMAND node ${test_project_name}.js --gtest_output=xml:${test_project_name}_report.xml --extra-verbose --gtest_break_on_failure)
else()
	add_test(NAME ${lib_name} COMMAND ${test_project_name} --gtest_output=xml:${test_project_name}_report.xml --extra-verbose --gtest_break_on_failure)
endif()

if(SANITIZER)
	include(../sanitizer.cmake)
	enable_sanitizer(${test_project_name} ${lib_name})
endif()

if(COVERAGE)
	include(../coverage.cmake)
	enable_coverage(${test_project_name} ${lib_name})
endif()
