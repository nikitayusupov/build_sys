cmake_minimum_required(VERSION 3.7)

project(B VERSION 1.0.0 DESCRIPTION "Project with segment product function")
set(CMAKE_CXX_STANDARD 11)

add_library(${PROJECT_NAME} SHARED lib.cpp)