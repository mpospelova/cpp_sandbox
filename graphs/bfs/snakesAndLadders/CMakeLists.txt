cmake_minimum_required(VERSION 3.13 FATAL_ERROR)
project(snakes_and_ladders)

file(GLOB source_files "*.cpp")
add_executable(snakes_and_ladders ${source_files})