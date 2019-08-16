cmake_minimum_required(VERSION 3.14)
project(42exam C)

set(CMAKE_C_STANDARD 99)

add_executable(42exam  level04/sort_list/cmp.c  level04/sort_list/sort_list.c  level04/sort_list/print.c  level04/sort_list/push.c  level04/sort_list/test.c)