cmake_minimum_required(VERSION 3.16)
project(1_MMORG)

set(CMAKE_CXX_STANDARD 20)

find_package(Boost REQUIRED)
if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
    add_executable(1_MMORG main.cpp)
    target_link_libraries(1_MMORG ${Boost_LIBRARIES})
endif()