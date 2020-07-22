cmake_minimum_required(VERSION 3.16)
project(2_QueryBroker)

set(CMAKE_CXX_STANDARD 20)

find_package(Boost REQUIRED)
if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
    add_executable(2_QueryBroker main.cpp)
    target_link_libraries(2_QueryBroker ${Boost_LIBRARIES})
endif()