#include <stdio.h>
#include <unistd.h>
#include "../mySimpleComputer/sc_constants.h"
#include "../mySimpleComputer/sc_variables.h"
#include "../myTerm/mt_constants.h"
#include "../include/myTerm.h"
#include "../include/enums.h"

void printCell(int address, enum colors fg, enum colors bg)
{
    if (address < RAM_MIN_ADDRESS || address > RAM_MAX_ADDRESS)
    {
        printf("ERROR. Invalid adress\n");
        return;
    }
    if (bg < MIN_COLOR || bg > MAX_COLOR)
    {
        printf("ERROR. Invalid BG color\n");
        return;
    }
    if (fg < MIN_COLOR || fg > MAX_COLOR)
    {
        printf("ERROR. Invalid FG color\n");
        return;
    }
    mt_gotoXY(2 + address / 10, 2 + address % 10); //доделать в буд версиях
    mt_setbgcolor(bg);
    mt_setfgcolor(fg);
    printf("%d", RAM[address]);
}
