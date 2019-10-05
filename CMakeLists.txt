cmake_minimum_required(VERSION 3.14)
project(42exam C)

set(CMAKE_C_STANDARD 99)

add_executable(42exam  level04/flood_fill/flood_fill.h  level04/flood_fill/flood_fill.c  level04/flood_fill/test.c)