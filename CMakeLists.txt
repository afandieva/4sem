cmake_minimum_required(VERSION 3.29)
project(multiThreading)

set(CMAKE_CXX_STANDARD 20)

add_executable(multiThreading main.cpp
        mutex.cpp
        shrMutex.cpp
        shrMutex2.cpp
        mutex3.cpp)
