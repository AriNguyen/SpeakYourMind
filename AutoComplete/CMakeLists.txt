cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(AutoComplete)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

add_executable(AutoComplete search.cpp)
