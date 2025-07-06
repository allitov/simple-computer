#include <stdio.h>
#include "../include/mySimpleComputer.h"

int sc_commandValidate(const int command)
{
    if (command < 0x0 || command > 0x7f)
    {
        printf("Command value must be from 0x0 to 0x7f\n");
        return -1;
    }

    // TODO: сделать проверку на конкретную команду

    return 0;
}
