#include <stdlib.h>
#include "../include/mySimpleComputer.h"
#include "./sc_constants.h"
#include "sc_variables.h"

int sc_regGet(int registerFlag, int *value)
{
    if (registerFlag < FLAG_OPERATION_OVERFLOW || registerFlag > FLAG_IGNORE_CLOCK)
    {
        return ERROR;
    }
    if (value == NULL)
    {
        return ERROR;
    }
    *value = flags & registerFlag;
    return SUCCESS;
}
