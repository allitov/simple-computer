#include <stdio.h>
#include "../include/constants.h"
#include "../include/myTerm.h"

int mt_gotoXY(const int x, const int y)
{
    if (x < 1 || y < 1)
    {
        return ERROR;
    }

    printf("\033[%d;%dH", y, x);
    fflush(stdout);

    return OK;
}
