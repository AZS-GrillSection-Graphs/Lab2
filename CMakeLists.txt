cmake_minimum_required(VERSION 3.9)
project(Graphs2)
set(EXECUTABLE_NAME ${PROJECT_NAME})

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS_RELEASE "-O2 -DNDEBUG")
set(CMAKE_CXX_FLAGS_DEBUG "-g -Wall -Wextra")

include_directories(include/)

file(GLOB SOURCES src/* include/*)
add_executable(${EXECUTABLE_NAME} ${SOURCES} src/RandomEulerGraph.cpp include/RandomEulerGraph.h src/RandomKRegularGraph.cpp include/RandomKRegularGraph.h)