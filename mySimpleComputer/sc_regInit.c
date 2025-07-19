#include "../include/mySimpleComputer.h"
#include "./sc_constants.h"

extern int flags;

int sc_regInit(void)
{
    flags = 0;
    return OK;
}
