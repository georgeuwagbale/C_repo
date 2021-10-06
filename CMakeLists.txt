cmake_minimum_required(VERSION 3.19)
project(C C)

set(CMAKE_C_STANDARD 99)

add_executable(C main.c HEAD.H random-int-generator/Random_integer.c Pool.c random-int-generator/Game.c fareef.c)