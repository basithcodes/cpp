cmake_minimum_required(VERSION 3.2)

project(CPP_Project)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(EXECUTABLE_NAME main)
set(LIBRARY_NAME mylib)

add_subdirectory(feature_1)
add_subdirectory(app)
