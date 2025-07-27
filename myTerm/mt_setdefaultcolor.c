#include <stdio.h>
#include "../include/myTerm.h"
#include "../include/constants.h"
#include "mt_constants.h"

int mt_setdefaultcolor(void) {
    printf(DEFAULT_COLOR_PREF);
    return OK;
}
