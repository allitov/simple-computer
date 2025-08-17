#include <stdio.h>

#include "../include/constants.h"
#include "../include/myBigChars.h"

int bc_printA(char* str)
{
    if (str == NULL)
    {
        return ERROR;
    }
    printf("\033(0%s\033(B", str);

    return OK;
}
