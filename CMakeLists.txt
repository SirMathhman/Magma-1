cmake_minimum_required(VERSION 3.16)
project(Magma_1)

add_executable(Magma main.c assert.c assert.h lang.c lang.h)
add_executable(MagmaTest assert.c assert.h lang lang.h test.c)