cmake_minimum_required(VERSION 3.4)
project(basic_template)

set(CMAKE_CXX_STANDARD 17) 
set(CMAKE_CXX_FLAGS "-W -fPIC")

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
set(cpp_basic_compile_src main.cpp)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin/template)
add_executable(basic_template ${cpp_basic_compile_src})

