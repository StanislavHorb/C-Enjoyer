cmake_minimum_required(VERSION 3.30)
project(firstproject)

set(CMAKE_CXX_STANDARD 20)

add_executable(firstproject main.cpp
        firststep.cpp
        firststep.h
        calculator.cpp
        calculator.h)
