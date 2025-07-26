#include <stdio.h>
#include "mt_constants.h"
#include "../include/constants.h"
#include "../include/myTerm.h"
#include "../include/enums.h"

int mt_setbgcolor(enum colors color)
{
    if (color >= MIN_COLOR && color <= MAX_COLOR)
    {
        printf(BGCOLOR_PREF, color);
        return OK;
    }
    return ERROR;
}
