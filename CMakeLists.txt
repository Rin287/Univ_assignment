cmake_minimum_required(VERSION 3.30)
project(Univ_assignment)

set(CMAKE_CXX_STANDARD 20)

add_executable(Univ_assignment main.cpp
        Operating_Module.cpp
        Operating_Module.h
        assignment_C_3_2.c
        assignment_C_3_2.h
        fc_Module.cpp
        fc_Module.h
        assignment_C_3_80p_81p.c
        assignment_C_3_80p_81p.h)
