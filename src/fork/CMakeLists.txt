cmake_minimum_required(VERSION 3.10)
project(fork)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin/fork)
add_executable(fork1 fork1.cpp)
add_executable(fork2 fork2.cpp)