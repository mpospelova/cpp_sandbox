cmake_minimum_required(VERSION 3.13 FATAL_ERROR)
project(chaos)

file(GLOB source_files "*.cpp")
add_executable(chaos ${source_files})