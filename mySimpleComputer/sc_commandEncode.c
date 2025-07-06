#include <stdio.h>
#include "../include/mySimpleComputer.h"

int sc_commandEncode(const int sign, const int command, const int operand, int* value)
{
    if (sign != 0)
    {
        printf("Command must start with 0\n");
        return -1;
    }
    if (command < 0x0 || command > 0x7f)
    {
        printf("Command value must be from 0x0 to 0x7f\n");
        return -1;
    }
    if (operand < 0x0 || operand > 0x7f)
    {
        printf("Operand value must be from 0x0 to 0x7f\n");
        return -1;
    }

    *value = sign << 15 | command << 7 | operand;

    return 0;
}
