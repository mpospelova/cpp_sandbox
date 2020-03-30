cmake_minimum_required(VERSION 3.13 FATAL_ERROR)
project(clouds)

file(GLOB source_files "*.cpp")
add_executable(clouds ${source_files})