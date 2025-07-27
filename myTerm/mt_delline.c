#include <stdio.h>
#include "../include/myTerm.h"
#include "../include/constants.h"
#include "mt_constants.h"

int mt_delline(void) {
    printf(DELLINE_PREF);
    return OK;
}
