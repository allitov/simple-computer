#include <stdio.h>
#include "../include/constants.h"
#include "../include/mySimpleComputer.h"
#include "../include/myTerm.h"
#include "./console.h"

void printCommand(void)
{
    // TODO: посчитать реальные x и y
    mt_gotoXY(1, 1);

    int cellAddress;
    int result = sc_icounterGet(&cellAddress);
    if (result == ERROR)
    {
        return;
    }

    int cellValue;
    result = sc_memoryGet(cellAddress, &cellValue);
    if (result == ERROR)
    {
        return;
    }

    int sign, command, operand;
    int isCommandInvalid = 0;
    result = sc_commandDecode(cellValue, &sign, &command, &operand);
    if (result == ERROR)
    {
        isCommandInvalid = 1;
    }

    printf("%c %c %02X : %02X", isCommandInvalid ? '!' : '', sign ? '-' : '+', command, operand);
    fflush(stdout);
}
