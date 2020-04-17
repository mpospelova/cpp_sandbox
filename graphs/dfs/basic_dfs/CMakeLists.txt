cmake_minimum_required(VERSION 3.13 FATAL_ERROR)
project(dfs)

file(GLOB source_files "*.cpp")
add_executable(dfs ${source_files})