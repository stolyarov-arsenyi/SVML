cmake_minimum_required(VERSION 3.10)

project(SVML)

set(CMAKE_CXX_STANDARD 11)

add_library(SVML SHARED SVML.cpp)

target_compile_options(SVML PUBLIC -march=native)

target_link_libraries(SVML PUBLIC imf intlc irng svml)
