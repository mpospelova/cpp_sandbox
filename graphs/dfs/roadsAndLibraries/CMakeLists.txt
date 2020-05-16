cmake_minimum_required(VERSION 3.13 FATAL_ERROR)
project(roads_and_libraries)

file(GLOB source_files "*.cpp")
add_executable(roads_and_libraries ${source_files})