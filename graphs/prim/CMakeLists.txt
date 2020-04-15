cmake_minimum_required(VERSION 3.13 FATAL_ERROR)
project(prim)

file(GLOB source_files "*.cpp")
add_executable(prim ${source_files})