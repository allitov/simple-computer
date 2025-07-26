#include <stdio.h>
#include "../include/constants.h"
#include "../include/myTerm.h"

int mt_clrscr(void)
{
    printf("\033[2J\033[H");
    fflush(stdout);

    return OK;
}
