#include <stdio.h>
#include "../include/constants.h"
#include "../include/myTerm.h"
#include "mt_constants.h"

int mt_clrscr(void)
{
    printf(CLEAR_SCREEN);
    fflush(stdout);

    return OK;
}
