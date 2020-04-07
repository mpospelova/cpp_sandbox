cmake_minimum_required(VERSION 3.13 FATAL_ERROR)
project(bubble_sort)

file(GLOB source_files "*.cpp")
add_executable(bubble_sort ${source_files})