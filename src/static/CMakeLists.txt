cmake_minimum_required(VERSION 3.4)
project(static_demo)

set(CMAKE_CXX_STANDARD 17) 
set(CMAKE_CXX_FLAGS "-W -fPIC")

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
set(cpp_basic_compile_src static.cpp demo.cpp)

add_executable(static_demo ${cpp_basic_compile_src})
