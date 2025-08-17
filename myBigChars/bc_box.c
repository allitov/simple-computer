#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <wchar.h>
#include <unistd.h>

#include "../include/constants.h"
#include "../include/myTerm.h"
#include "../include/myBigChars.h"

#include "../include/enums.h"


int bc_box(int x1, int y1, int x2, int y2, enum colors box_fg, enum colors box_bg, char* header, enum colors header_fg,
           enum colors header_bg)
{
    if (x1 < 1 || y1 < 1 || x2 < 1 || y2 < 1 || header == NULL)
    {
        return ERROR;
    }

    mt_setfgcolor(box_fg);
    mt_setbgcolor(box_bg);

    int i;

    for (i = 0; i < x2; i++)
    {
        printf("\033[%d;%dH", x1 + i, y1);

        if (i == 0)
        {
            bc_printA("l");
            for (int j = 1; j < y2 - 1; j++)
            {
                bc_printA("q");
            }
            bc_printA("k");
        }
        else if (i == (x2 - 1))
        {
            bc_printA("m");
            for (int j = 1; j < y2 - 1; j++)
            {
                bc_printA("q");
            }
            bc_printA("j");
        }
        else
        {
            bc_printA("x");
            for (int j = 1; j < y2 - 1; j++)
            {
                bc_printA(" ");
            }
            bc_printA("x");
        }
    }
    if (header)
    {
        int header_len = bc_strlen(header);
        if (header_len == 0)
        {
            return ERROR;
        }
        if (header_len > y2 - 2)
        {
            header_len = y2 - 2;
        }
        int header_x = x1;
        int header_y = y1 + (y2 - header_len) / 2;

        printf("\033[%d;%dH", header_x, header_y);
        mt_setfgcolor(header_fg);
        mt_setbgcolor(header_bg);

        printf("%s", header);
    }

    mt_setdefaultcolor();

    return OK;
}
