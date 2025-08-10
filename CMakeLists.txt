cmake_minimum_required(VERSION 3.31)
project(simple_computer C)

set(CMAKE_C_STANDARD 11)

add_executable(simple_computer
        mySimpleComputer/sc_commandEncode.c
        mySimpleComputer/sc_commandDecode.c
        mySimpleComputer/sc_commandValidate.c
        mySimpleComputer/sc_memorySet.c
        mySimpleComputer/sc_memorySave.c
        mySimpleComputer/sc_memoryLoad.c
        mySimpleComputer/sc_memoryGet.c
        mySimpleComputer/sc_memoryInit.c
        include/mySimpleComputer.h
        mySimpleComputer/sc_commands.h
        mySimpleComputer/sc_constants.h
        console/printDecodedCommand.c
        console/console.h
        console/printDec.c
        console/printBin.c
        console/printOct.c
        console/printHex.c
        console/printCell.c
        mySimpleComputer/sc_variables.h
        mySimpleComputer/sc_variables.c
        mySimpleComputer/sc_regInit.c
        mySimpleComputer/sc_regSet.c
        console/printFlags.c
        mySimpleComputer/sc_regGet.c
        mySimpleComputer/sc_accumulatorInit.c
        mySimpleComputer/sc_accumulatorGet.c
        console/printAccumulator.c
        mySimpleComputer/sc_accumulatorSet.c
        mySimpleComputer/sc_icounterInit.c
        mySimpleComputer/sc_icounterSet.c
        mySimpleComputer/sc_icounterGet.c
        console/printCounters.c
        include/myTerm.h
        myTerm/mt_clrscr.c
        include/constants.h
        myTerm/mt_gotoXY.c
        myTerm/mt_getscreensize.c
        myTerm/mt_setfgcolor.c
        myTerm/mt_setbgcolor.c
        myTerm/mt_setdefaultcolor.c
        myTerm/mt_setcursorvisible.c
        myTerm/mt_delline.c
        console/console.c
        console/printCommand.c
        include/enums.h
        myTerm/mt_constants.h
        myBigChars/bc_bigcharwrite.cpp
        myBigChars/bc_bigcharread.cpp
        include/myBigChars.h)
