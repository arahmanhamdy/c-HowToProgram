cmake_minimum_required(VERSION 3.2)
project(try)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(try ${SOURCE_FILES})