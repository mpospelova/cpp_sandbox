cmake_minimum_required(VERSION 3.13 FATAL_ERROR)
project(kruskal)

file(GLOB source_files "*.cpp")
add_executable(kruskal ${source_files})