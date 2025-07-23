#ifndef MYTERM_H
#define MYTERM_H

int mt_clrscr(void);
int mt_gotoXY(int x, int y);
int mt_getscreensize (int * rows, int * cols);
int mt_setfgcolor (enum colors color);
int mt_setbgcolor (enum colors color);
#endif // MYTERM_H
