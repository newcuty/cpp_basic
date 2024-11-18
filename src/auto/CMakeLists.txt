cmake_minimum_required(VERSION 3.10)
project(auto)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin/auto)
add_executable(auto auto.cpp)