cmake_minimum_required(VERSION 3.16)
project(1_Shapes)

FIND_PACKAGE( Boost COMPONENTS program_options REQUIRED )
INCLUDE_DIRECTORIES( ${Boost_INCLUDE_DIR} )

set(CMAKE_CXX_STANDARD 20)

add_executable(1_Shapes main.cpp)
TARGET_LINK_LIBRARIES( 1_Shapes LINK_PUBLIC ${Boost_LIBRARIES} )