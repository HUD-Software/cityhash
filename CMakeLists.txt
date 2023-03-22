cmake_minimum_required(VERSION 3.18)

set(lib_name cityhash)

project(${lib_name}	
        DESCRIPTION "Google CityHash algorithm"
        LANGUAGES CXX
)



if(COVERAGE)
file(DOWNLOAD https://hud-software.github.io/cmake/coverage.cmake ${CMAKE_BINARY_DIR}/coverage.cmake)
include(${CMAKE_BINARY_DIR}/coverage.cmake)
endif()

if(SANITIZER)
file(DOWNLOAD https://hud-software.github.io/cmake/sanitizer.cmake ${CMAKE_BINARY_DIR}/sanitizer.cmake)
include(${CMAKE_BINARY_DIR}/sanitizer.cmake)
endif()

add_subdirectory(src)
enable_testing()
add_subdirectory(test)
