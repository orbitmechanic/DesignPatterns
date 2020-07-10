cmake_minimum_required(VERSION 3.16)
project(3_Facets)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(3_Facets
        Facets.cpp
        Person.cpp
        Person.h
        PersonAddressBuilder.h
        PersonBuilder.cpp
        PersonBuilder.h
        PersonJobBuilder.h)
