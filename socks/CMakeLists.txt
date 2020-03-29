cmake_minimum_required(VERSION 3.13 FATAL_ERROR)
project(socks)

file(GLOB source_files "*.cpp")
add_executable(socks ${source_files})