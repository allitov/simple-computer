#ifndef MYBIGCHARS_H
#define MYBIGCHARS_H

#include "enums.h"

int bc_setbigcharpos(int* big, int x, int y, int value);

int bc_getbigcharpos(int* big, int x, int y, int* value);

int bc_printbigchar(int [2], int x, int y, enum colors fg, enum colors bg);

int bc_strlen(char* str);

int bc_printA(char* str);

int bc_box(int x1, int y1, int x2, int y2, enum colors box_fg, enum colors box_bg, char* header, enum colors header_fg,
           enum colors header_bg);

#endif //MYBIGCHARS_H
