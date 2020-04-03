cmake_minimum_required(VERSION 3.1 FATAL_ERROR)
project(test VERSION 0.1.0 LANGUAGES CXX)

add_library(foo SHARED foo.hpp foo.cpp)

add_executable(test main.cpp)
target_link_libraries(test PRIVATE foo)
