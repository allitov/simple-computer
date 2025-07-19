#include "../include/constants.h"
#include "../include/mySimpleComputer.h"
#include "./sc_variables.h"

int sc_accumulatorSet(const int value)
{
    if (value < 0x00 || value > 0x7FFF)
    {
        return ERROR;
    }

    accumulator = value;

    return OK;
}
