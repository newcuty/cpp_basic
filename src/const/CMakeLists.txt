cmake_minimum_required(VERSION 3.4)
project(const_demo)

set(CMAKE_CXX_STANDARD 17) 
set(CMAKE_CXX_FLAGS "-W -g -fPIC")

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
set(cpp_basic_compile_src const.cpp)

#add_library(struct SHARED struct.cpp)
add_executable(const_demo ${cpp_basic_compile_src})
#target_link_libraries(main)
