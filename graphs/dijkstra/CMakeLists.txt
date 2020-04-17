cmake_minimum_required(VERSION 3.13 FATAL_ERROR)
project(dijkstra)

file(GLOB source_files "*.cpp")
add_executable(dijkstra ${source_files})