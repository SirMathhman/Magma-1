cmake_minimum_required(VERSION 3.16)
project(Magma_1)

add_executable(Magma main.c array.c array.h lang.c lang.h)
add_executable(MagmaTest test.c array.c array.h lang.c lang.h)