cmake_minimum_required(VERSION 3.31)
project(simple_computer C)

set(CMAKE_C_STANDARD 11)

add_executable(simple_computer main.c
        mySimpleComputer/sc_commandEncode.c
        mySimpleComputer/sc_commandDecode.c
        mySimpleComputer/sc_commandValidate.c
        include/mySimpleComputer.h
        mySimpleComputer/commands.h)
