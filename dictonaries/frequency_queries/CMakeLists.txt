cmake_minimum_required(VERSION 3.13 FATAL_ERROR)
project(queries)

file(GLOB source_files "*.cpp")
add_executable(queries ${source_files})