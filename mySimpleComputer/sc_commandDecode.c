#include <stdio.h>
#include "../include/mySimpleComputer.h"

int sc_commandDecode(const int value, int* sign, int* command, int* operand)
{
    int s = value & 0x1 << 15;
    int c = value & 0x7f << 7;
    int o = value & 0x7f;

    if (s != 0)
    {
        printf("Sign must be 0x0\n");
        return -1;
    }
    if (sc_commandValidate(c) != 0)
    {
        printf("Command must be 0x0\n");
        return -1;
    }

    *sign = s;
    *command = c;
    *operand = o;

    return 0;
}
