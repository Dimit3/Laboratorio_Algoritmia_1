cmake_minimum_required(VERSION 3.13)
project(triangulo)

set(CMAKE_CXX_STANDARD 14)

add_executable(triangulo main.cpp)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static-libstdc++ -static-libgcc")