#include <stdio.h>
#include "../include/mySimpleComputer.h"
#include "./console.h"

void printCounters(void)
{
    int value;
    sc_icounterGet(&value);
    printf("IC: %c%X%X%X%X\n", (((value >> 14) & 0x1) ? '-' : '+'), (value >> 11) & 0x7, (value >> 7) & 0xF,
           (value >> 4) & 0x7, value & 0xF);
}
