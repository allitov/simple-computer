#include "../include/constants.h"
#include "../include/mySimpleComputer.h"
#include "./sc_variables.h"
#include "sc_constants.h"

int sc_icounterSet(const int value)
{
    if (value < RAM_MIN_VALUE || value > RAM_MAX_VALUE)
    {
        return ERROR;
    }

    icounter = value;

    return OK;
}
