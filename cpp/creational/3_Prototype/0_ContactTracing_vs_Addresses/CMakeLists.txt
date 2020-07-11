cmake_minimum_required(VERSION 3.16)
project(0_ContactTracing_vs_Addresses)

set(CMAKE_CXX_STANDARD 20)

FIND_PACKAGE( boost 1.73 COMPONENTS program_options REQUIRED)
INCLUDE_DIRECTORIES( ${Boost_INCLUDE_DIR})
add_executable(0_ContactTracing_vs_Addresses main.cpp)
TARGET_LINK_LIBRARIES(0_ContactTracing_vs_Addresses LINK_PUBLIC ${Boost_LIBRARIES})