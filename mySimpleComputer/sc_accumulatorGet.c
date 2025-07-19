#include <stdlib.h>
#include "../include/constants.h"
#include "../include/mySimpleComputer.h"
#include "./sc_variables.h"

int sc_accumulatorGet(int *value)
{
    if (value == NULL)
    {
        return ERROR;
    }

    *value = accumulator;

    return OK;
}
