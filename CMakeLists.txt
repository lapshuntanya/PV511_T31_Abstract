cmake_minimum_required(VERSION 4.2)
project(PV511_T31_Abstract)

set(CMAKE_CXX_STANDARD 20)

add_executable(PV511_T31_Abstract main.cpp
        Date.h
        Date.cpp
        Soft.cpp
        Soft.h
        Free.cpp
        Free.h)
