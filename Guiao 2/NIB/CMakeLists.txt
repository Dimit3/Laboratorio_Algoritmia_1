cmake_minimum_required(VERSION 3.13)
project(NIB C)

set(CMAKE_C_STANDARD 99)

add_executable(NIB cmake-build-debug/main.c cmake-build-debug/auxiliares.c cmake-build-debug/auxiliares.h)