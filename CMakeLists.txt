cmake_minimum_required(VERSION 3.31)
project(simple_computer C)

set(CMAKE_C_STANDARD 11)

add_executable(simple_computer
        mySimpleComputer/sc_commandEncode.c
        mySimpleComputer/sc_commandDecode.c
        mySimpleComputer/sc_commandValidate.c
        include/mySimpleComputer.h
        mySimpleComputer/sc_commands.h
        mySimpleComputer/sc_constants.h
        console/pr01.c
        console/printDecodedCommand.c
        console/console.h
        console/printDec.c
        console/printBin.c
        console/printOct.c
        console/printHex.c)
