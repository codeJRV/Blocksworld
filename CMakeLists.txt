cmake_minimum_required(VERSION 3.8)
project(FirstProject)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Node.cpp Node.h Tree.cpp Tree.h AStar.cpp AStar.h Heirustic.cpp Heirustic.h)
add_executable(FirstProject ${SOURCE_FILES})