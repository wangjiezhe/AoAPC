cmake_minimum_required(VERSION 3.10)
project(AoAPC)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(ch1)
add_subdirectory(ch2)

add_executable(AoAPC main.cpp)
