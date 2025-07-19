#include "../include/mySimpleComputer.h"
#include "../mySimpleComputer/sc_constants.h"
#include "../mySimpleComputer/sc_variables.h"

int sc_accumulatorSet(int value)
{
    if (value < 0x00 || value > 0x7FFF) return ERROR;
    accumulator = value;

    return SUCCESS;
}
