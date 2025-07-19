#include "../include/mySimpleComputer.h"
#include "./sc_constants.h"

extern int flags;

int sc_regSet(int registerflag, int value)
{
    if (registerflag != FLAG_OPERATION_OVERFLOW && registerflag != FLAG_DIVISION_BY_ZERO &&
        registerflag != FLAG_MEMORY_OVERFLOW && registerflag != FLAG_INVALID_COMMAND &&
        registerflag != FLAG_IGNORE_CLOCK)
    {
        return ERROR;
    }
    if (value == 1)
    {
        flags |= registerflag;
        return OK;
    }
    else
    {
        flags &= ~registerflag;
        return OK;
    }
}
