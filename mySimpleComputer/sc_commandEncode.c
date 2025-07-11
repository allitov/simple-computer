#include <stdio.h>
#include "../include/mySimpleComputer.h"
#include "./sc_constants.h"

int sc_commandEncode(const int sign, const int command, const int operand, int* value)
{
    if (sign == MINUS)
    {
        printf("Command must start with %X\n", PLUS);
        return ERROR;
    }
    if (sc_commandValidate(command) == ERROR)
    {
        printf("Invalid command\n");
        return ERROR;
    }
    if (operand < OPERAND_MIN || operand > OPERAND_MAX)
    {
        printf("Operand value must be from %X to %X\n", OPERAND_MIN, OPERAND_MAX);
        return ERROR;
    }

    *value = sign << SIGN_POS | command << COMMAND_POS | operand << OPERAND_POS;

    return OK;
}
