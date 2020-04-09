cmake_minimum_required(VERSION 3.13 FATAL_ERROR)
project(strings)

file(GLOB source_files "*.cpp")
add_executable(strings ${source_files})