#include <stdio.h>
#include "../include/myTerm.h"
#include "./console.h"
#include "../mySimpleComputer/sc_constants.h"

extern int flags;

void printFlags(void)
{
    mt_gotoXY(1, 3);
    printf("flags: %c %c %c %c %c\n", (flags & FLAG_OPERATION_OVERFLOW) ? 'P' : '_',
           (flags & FLAG_DIVISION_BY_ZERO) ? 'O' : '_', (flags & FLAG_MEMORY_OVERFLOW) ? 'M' : '_',
           (flags & FLAG_IGNORE_CLOCK) ? 'T' : '_', (flags & FLAG_INVALID_COMMAND) ? 'E' : '_');
}
