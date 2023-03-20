cmake_minimum_required(VERSION 3.18)

set(lib_name city_hash)

project(${lib_name}	
        DESCRIPTION "Google CityHash algorithm"
        LANGUAGES CXX
)

add_subdirectory(src)
enable_testing()
add_subdirectory(test)