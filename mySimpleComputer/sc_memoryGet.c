#include "../include/mySimpleComputer.h"
#include "./sc_constants.h"
#include "sc_variables.h"

int sc_memoryGet(int address, int* value)
{
    if (address < RAM_MIN_ADDRESS || address > RAM_MAX_ADDRESS)
    {
        return ERROR;
    }
    else
    {
        *value = RAM[address];
        return OK;
    }
}
