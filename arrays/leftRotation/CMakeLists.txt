cmake_minimum_required(VERSION 3.13 FATAL_ERROR)
project(left_rotation)

file(GLOB source_files "*.cpp")
add_executable(left_rotation ${source_files})