cmake_minimum_required(VERSION 3.2)
project(dataype_primitive_c___application)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(dataype_primitive_c___application ${SOURCE_FILES})