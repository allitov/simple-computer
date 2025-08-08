#ifndef MYBIGCHARS_H
#define MYBIGCHARS_H

#include "enums.h"

int bc_setbigcharpos(int *big, int x, int y, int value);

int bc_getbigcharpos(int *big, int x, int y, int *value);

int bc_printbigchar(int [2], int x, int y, enum colors fg, enum colors bg);

#endif //MYBIGCHARS_H
