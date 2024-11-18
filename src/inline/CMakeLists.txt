cmake_minimum_required(VERSION 3.10)
project(inline)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin/inline)
add_executable(inline inline.cpp)