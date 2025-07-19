#include <stdlib.h>
#include "../include/constants.h"
#include "../include/mySimpleComputer.h"
#include "../mySimpleComputer/sc_variables.h"

int sc_icounterGet(int *value)
{
    if (value == NULL)
    {
        return ERROR;
    }

    *value = icounter;

    return OK;
}
