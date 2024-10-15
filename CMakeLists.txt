# CMakeLists.txt

cmake_minimum_required(VERSION 3.10)
project(QuadraticRootsSolver)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add executable for the main program
add_executable(findroots src/main.cpp)

# Add executable for the test
add_executable(test_findroots tests/test_findroots.cpp)