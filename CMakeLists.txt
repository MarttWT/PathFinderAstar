cmake_minimum_required(VERSION 4.1)
project(PathFinderAstar)

set(CMAKE_CXX_STANDARD 20)

add_executable(PathFinderAstar main.cpp
        Objects/Node.cpp
        Objects/Node.h
        Objects/Edge.cpp
        Objects/Edge.h
        Astar.cpp
        Objects/Map.cpp
        Objects/Map.h)
