cmake_minimum_required(VERSION 3.7)
project(cv7)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES hlavni.c makro.c)
add_executable(cv7 ${SOURCE_FILES})