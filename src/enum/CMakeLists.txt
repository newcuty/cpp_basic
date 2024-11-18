cmake_minimum_required(VERSION 3.10)
project(enum)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin/enum)
add_executable(enum enum.cpp)