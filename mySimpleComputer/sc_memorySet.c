#include "../include/mySimpleComputer.h"
#include "./sc_constants.h"
#include "sc_variables.h"

int sc_memorySet(int address, int value)
{
    if (address < RAM_MIN_ADDRESS || address > RAM_MAX_ADDRESS)
    {
        return ERROR;
    }
    if (value > RAM_MAX_VALUE || value < RAM_MIN_VALUE)
    {
        return ERROR;
    }
    RAM[address] = value;
    return OK;
}
