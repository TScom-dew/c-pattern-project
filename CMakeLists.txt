cmake_minimum_required(VERSION 4.3.2)

project(c_programming_pattern_project VERSION 1.0)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)


add_executable(program main.c patterns.c)

target_link_libraries(program m)
