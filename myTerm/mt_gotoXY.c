#include <stdio.h>
#include "../include/constants.h"
#include "../include/myTerm.h"
#include "./mt_constants.h"

int mt_gotoXY(const int x, const int y)
{
    if (x < 1 || y < 1)
    {
        return ERROR;
    }

    printf(GOTO_YX, y, x);
    fflush(stdout);

    return OK;
}
