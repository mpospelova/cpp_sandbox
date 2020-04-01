cmake_minimum_required(VERSION 3.13 FATAL_ERROR)
project(note)

file(GLOB source_files "*.cpp")
add_executable(note ${source_files})