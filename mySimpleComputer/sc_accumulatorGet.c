#include <stdlib.h>
#include "../include/mySimpleComputer.h"
#include "../mySimpleComputer/sc_constants.h"
#include "../mySimpleComputer/sc_variables.h"

int sc_accumulatorGet(int *value)
{
    if (value == NULL)
    {
        return ERROR;
    }

    *value = accumulator;

    return SUCCESS;
}
