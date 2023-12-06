cmake_minimum_required(VERSION 3.4)
project(vector_demo)

set(CMAKE_CXX_STANDARD 17) 
set(CMAKE_CXX_FLAGS "-W -fPIC")

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
set(vector_compile_src vector.cpp)

add_executable(vector_demo ${vector_compile_src})