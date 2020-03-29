cmake_minimum_required(VERSION 3.13 FATAL_ERROR)
project(countingValleys)

file(GLOB source_files "*.cpp")
add_executable(countingValleys ${source_files})