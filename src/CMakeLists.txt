cmake_minimum_required(VERSION 3.18)

set( src city.cc)

set ( interface	cityhash/city.h)

source_group( TREE ${CMAKE_SOURCE_DIR} FILES ${interface} ${src})

add_library(cityhash STATIC ${interface} ${src})

target_include_directories(cityhash PUBLIC . )