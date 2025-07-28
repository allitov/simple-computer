#include <sys/ioctl.h>
#include <unistd.h>
#include "../include/constants.h"
#include "../include/myTerm.h"

int mt_getscreensize(int* rows, int* cols)
{
    struct winsize ws;

    if (ioctl(STDOUT_FILENO, TIOCGWINSZ, &ws) == ERROR)
    {
        return ERROR;
    }

    *rows = ws.ws_row;
    *cols = ws.ws_col;

    if (*rows <= 0 || *cols <= 0)
    {
        return ERROR;
    }

    return OK;
}
