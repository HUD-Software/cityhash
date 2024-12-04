cmake_minimum_required(VERSION 3.18)

set( src city.cc)

set ( interface	cityhash/city.h)

source_group( TREE ${CMAKE_SOURCE_DIR} FILES ${interface} ${src})

add_library(${lib_name} STATIC ${interface} ${src})

target_include_directories(${lib_name} PUBLIC . )

if(MSVC)
	target_compile_options( ${lib_name} PRIVATE /Zc:__cplusplus /std:c++20 /bigobj /permissive- /EHsc /utf-8 /arch:AVX2)
	target_compile_definitions(${lib_name} PRIVATE __SSE4_2__)
else()
	target_compile_options( ${lib_name} PRIVATE -msse4.2 -std=c++20)
endif()

target_compile_definitions(${lib_name} PRIVATE _DISABLE_VECTOR_ANNOTATION)

