#include "../include/constants.h"
#include "../include/mySimpleComputer.h"
#include "./sc_constants.h"

extern int flags;

int sc_regSet(const int registerFlag, const int value)
{
    if (registerFlag != FLAG_OPERATION_OVERFLOW && registerFlag != FLAG_DIVISION_BY_ZERO &&
        registerFlag != FLAG_MEMORY_OVERFLOW && registerFlag != FLAG_INVALID_COMMAND &&
        registerFlag != FLAG_IGNORE_CLOCK)
    {
        return ERROR;
    }

    flags = value == 1 ? flags | registerFlag : flags & ~registerFlag;

    return OK;
}
