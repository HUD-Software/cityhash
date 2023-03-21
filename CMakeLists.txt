cmake_minimum_required(VERSION 3.18)

set(lib_name city_hash)

project(${lib_name}	
        DESCRIPTION "Google CityHash algorithm"
        LANGUAGES CXX
)


if(COVERAGE)
include(.cmake/coverage.cmake)
endif()

if(SANITIZER)
include(.cmake/sanitizer.cmake)
endif()

add_subdirectory(src)
enable_testing()
add_subdirectory(test)
