project(Magma)

add_executable(Main main.c main.c system.c system.h)
add_executable(Test test.c test.c assert.c assert.h system.c system.h)