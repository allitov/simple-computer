#include <stdio.h>
#include "mt_constants.h"
#include "../include/myTerm.h"
#include "../include/constants.h"
#include "../include/enums.h"

int mt_setcursorvisible(int value)
{
    if (value == 1) {
        printf(CURSOR_VISIBLE_PREF);
    } else if (value == 0) {
        printf(CURSOR_INVISIBLE_PREF);
    } else {
        return ERROR;
    }
    return OK;
}
