#include <stdio.h>
#include <unistd.h>
#include "../mySimpleComputer/sc_constants.h"
#include "../mySimpleComputer/sc_variables.h"
#include "../myTerm/mt_constants.h"
#include "../include/myTerm.h"
#include "../include/enums.h"

void printCell(int address, enum colors fg, enum colors bg)
{
    if (address >= RAM_MIN_ADDRESS && address <= RAM_MAX_ADDRESS)
    {
        if (bg >= MIN_COLOR && bg <= MAX_COLOR)
        {
            if (fg >= MIN_COLOR && fg <= MAX_COLOR)
            {
                mt_gotoXY(2 + address/10, 2 + address%10); //доделать в буд версиях
                mt_setbgcolor(bg);
                mt_setfgcolor(fg);
                printf("%d", RAM[address]);
            }
            else
            {
                printf("ERROR. Invalid FG color\n");
            }
        }
        else
        {
            printf("ERROR. Invalid BG color\n");
        }
    }
    else
    {
        printf("ERROR. Invalid adress\n");
    }
}
