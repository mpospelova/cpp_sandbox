cmake_minimum_required(VERSION 3.13 FATAL_ERROR)
project(sherlock)

file(GLOB source_files "*.cpp")
add_executable(sherlock ${source_files})