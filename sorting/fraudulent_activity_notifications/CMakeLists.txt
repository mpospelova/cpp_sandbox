cmake_minimum_required(VERSION 3.13 FATAL_ERROR)
project(fan)

file(GLOB source_files "*.cpp")
add_executable(fan ${source_files})