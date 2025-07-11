#include "../include/mySimpleComputer.h"
#include "./sc_constants.h"
#include "sc_variables.h"

int sc_memorySet (int address, int value)
{
    if (address < 0 || address > 127 || value > 32767 || value < 0) //TODO: bliatstvo
    {
        return ERROR;
    }
    else
    {
        RAM[address] = value;
        return OK;
    }
}