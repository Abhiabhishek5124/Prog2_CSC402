cmake_minimum_required(VERSION 3.26)
project(prog2)

set(CMAKE_CXX_STANDARD 17)

add_executable(prog2 main.cpp
        Employee.h
        myQueue.h
        Employee.cpp
        myStack.cpp
        myQueue.cpp)
