#include <stdio.h>
#include "../include/mySimpleComputer.h"
#include "../include/myTerm.h"
#include "./console.h"

void printAccumulator(void) {
    mt_gotoXY(7, 4);
    int value;
    sc_accumulatorGet(&value);
    printf("Accumulator: %c%X%X%X%X\n", (((value >> 14) & 0x1) ? '-' : '+'), (value >> 11) & 0x7, (value >> 7) & 0xF,
           (value >> 4) & 0x7, value & 0xF);
}
