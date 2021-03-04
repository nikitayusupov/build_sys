cmake_minimum_required(VERSION 3.7)
project(myProject CXX)

set(CMAKE_CXX_STANDARD 11)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/lib)

set(EXECUTABLES C/main.cpp)
add_executable(${PROJECT_NAME} ${EXECUTABLES})

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR})
add_custom_command(
        OUTPUT ${PROJECT_SOURCE_DIR}/A/index.h
        WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}/A
        COMMAND python3 preparing.py ${PROJECT_SOURCE_DIR}/A/index.h
        DEPENDS ${PROJECT_SOURCE_DIR}/A/preparing.py
        COMMENT "Generating index.h"
)
add_custom_target(GenerateIndex DEPENDS A/index.h)
add_dependencies(${PROJECT_NAME} GenerateIndex)

add_subdirectory("B")
target_link_libraries(${PROJECT_NAME} B)