cmake_minimum_required(VERSION 3.13 FATAL_ERROR)
project(repeated_string)

file(GLOB source_files "*.cpp")
add_executable(repeated_string ${source_files})