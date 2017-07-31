cmake_minimum_required(VERSION 3.7)
project(cv2)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c)
add_executable(cv2 ${SOURCE_FILES})