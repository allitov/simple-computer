#ifndef MYTERM_H
#define MYTERM_H

#include "enums.h"

int mt_clrscr(void);
int mt_gotoXY(int x, int y);
int mt_getscreensize(int* rows, int* cols);
int mt_setfgcolor(enum colors color);
int mt_setbgcolor(enum colors color);
int mt_setdefaultcolor(void);
int mt_setcursorvisible(int value);
int mt_delline(void);
#endif // MYTERM_H
