#include "../include/mySimpleComputer.h"
#include "./sc_constants.h"
#include "sc_variables.h"

int sc_memoryGet (int address, int * value)
{
    if (address < 0 || address > 127) //TODO: bliatstvo
    {
        return ERROR;
    }
    else
    {
        *value = RAM[address];
        return OK;
    }
}