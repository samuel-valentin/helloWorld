cmake_minimum_required(VERSION 3.22)
project(hello_world)
set(CMAKE_C_STANDARD 99)

add_library(${PROJECT_NAME} hello_world.c hello_world.h)
