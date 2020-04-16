cmake_minimum_required(VERSION 3.13 FATAL_ERROR)
project(floyd)

file(GLOB source_files "*.cpp")
add_executable(floyd ${source_files})