#include "../include/constants.h"
#include "../include/mySimpleComputer.h"

extern int flags;

int sc_regInit(void)
{
    flags = 0;

    return OK;
}
