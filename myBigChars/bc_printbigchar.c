#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../include/constants.h"
#include "../include/myTerm.h"
#include "../include/myBigChars.h"

int bc_printbigchar(int big[2], int x, int y, enum colors fg, enum colors bg) {
    if (x < 1 || y < 1) {
        return ERROR;
    }

    mt_setfgcolor(fg);
    mt_setbgcolor(bg);

    for (int x = 0; x < 8; x++)
    {
        for (int y = 0; y < 8; y++)
        {
            int value;
            bc_getbigcharpos(big, x, y, &value);
            printf("\033[%d;%dH", x + x, y + y);
            bc_printA(value ? "a" : " ");
        }
    }
    mt_setdefaultcolor();
    return OK;
}
