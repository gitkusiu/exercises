cmake_minimum_required(VERSION 3.1)
#add_compile_options(-O3)
project(program)

add_library(Widget Widget.cpp Widget.hpp)

add_executable(program main.cpp)

target_link_libraries(program PRIVATE Widget)
