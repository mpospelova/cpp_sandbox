cmake_minimum_required(VERSION 3.13 FATAL_ERROR)
project(2darr)

file(GLOB source_files "*.cpp")
add_executable(2darr ${source_files})