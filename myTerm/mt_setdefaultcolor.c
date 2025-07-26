#include <stdio.h>
#include "mt_constants.h"
#include "../include/myTerm.h"
#include "../include/constants.h"
#include "../include/enums.h"

int mt_setdefaultcolor(void)
{
    printf(DEFAULT_COLOR_PREF);
    return OK;
}
