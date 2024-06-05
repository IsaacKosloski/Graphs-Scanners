cmake_minimum_required(VERSION 3.27)
project(Graphs_Scanners)

set(CMAKE_CXX_STANDARD 14)

include_directories(cpp/src)

add_executable(Graphs_Scanners
        cpp/src/scanner.cpp
        cpp/src/scanner.h
        cpp/src/node.h
        cpp/src/node.cpp
        cpp/src/graph.h
        cpp/src/graph.cpp)
