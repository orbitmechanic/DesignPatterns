cmake_minimum_required(VERSION 3.16)
project(0_Database)

find_package(Boost 1.73)
include_directories(${Boost_INCLUDE_DIR})
link_directories(${Boost_LIBRARY_DIR})

add_executable(0_Database main.cpp)

target_link_libraries(0_Database LINK_PUBLIC ${Boost_LIBRARIES})