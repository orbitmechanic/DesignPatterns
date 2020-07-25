cmake_minimum_required(VERSION 3.16)
project(1_Handmade)

set(CMAKE_CXX_STANDARD 20)

find_package(Boost 1.73 REQUIRED)
add_executable(1_Handmade main.cpp)

target_link_libraries(1_Handmade PUBLIC Boost)