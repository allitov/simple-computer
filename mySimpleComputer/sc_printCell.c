#include <stdio.h>
#include "../include/mySimpleComputer.h"
#include "./sc_constants.h"
#include "sc_variables.h"

void sc_printCell(int address)
{
    if (address >= 0 && address <= 127) //TODO: bliatstvo
    {
        printf("%d\n", RAM[address]);
    }
}