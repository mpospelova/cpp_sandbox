cmake_minimum_required(VERSION 3.13 FATAL_ERROR)
project(swaps)

file(GLOB source_files "*.cpp")
add_executable(swaps ${source_files})