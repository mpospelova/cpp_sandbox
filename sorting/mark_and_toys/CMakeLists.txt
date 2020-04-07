cmake_minimum_required(VERSION 3.13 FATAL_ERROR)
project(mt)

file(GLOB source_files "*.cpp")
add_executable(mt ${source_files})