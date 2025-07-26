#include <stdio.h>
#include "../include/constants.h"
#include "../include/enums.h"
#include "../include/myTerm.h"
#include "mt_constants.h"

int mt_setfgcolor(enum colors color)
{
    if (color >= MIN_COLOR && color <= MAX_COLOR)
    {
        printf(FGCOLOR_PREF, color);
        return OK;
    }
    return ERROR;
}
