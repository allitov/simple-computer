#include "../include/constants.h"
#include "../include/mySimpleComputer.h"
#include "./sc_constants.h"
#include "./sc_variables.h"

int sc_memorySet(const int address, const int value)
{
    if (address < RAM_MIN_ADDRESS || address > RAM_MAX_ADDRESS)
    {
        return ERROR;
    }
    if (value < RAM_MIN_VALUE || value > RAM_MAX_VALUE)
    {
        return ERROR;
    }

    RAM[address] = value;

    return OK;
}
