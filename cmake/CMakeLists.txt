cmake_minimum_required(VERSION 3.29.3)        #check cmake version in cmd and write

# Set the project name and version
project(AddNumbers VERSION 1.0)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the executable
add_executable(AddNumbers src/main.cpp src/Add.cpp)


