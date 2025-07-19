#include "../include/constants.h"
#include "../include/mySimpleComputer.h"
#include "./sc_variables.h"

int sc_icounterSet(const int value)
{
    if (value < 0x00 || value > 0x7FFF)
    {
        return ERROR;
    }

    icounter = value;

    return OK;
}
