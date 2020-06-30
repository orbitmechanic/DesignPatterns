cmake_minimum_required(VERSION 3.16)
project(Journal)

set(CMAKE_CXX_STANDARD 20)

find_package(Boost REQUIRED)
include_directories(${Boost_INCLUDE_DIR})

add_executable(Journal Journal.cpp)