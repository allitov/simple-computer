#include <stdio.h>
#include "../include/mySimpleComputer.h"
#include "./sc_constants.h"

int sc_commandDecode(const int value, int* sign, int* command, int* operand)
{
    const int v_sign = value & MINUS << SIGN_POS;
    const int v_command = value & COMMAND_MAX << COMMAND_POS;
    const int v_operand = value & OPERAND_MAX << OPERAND_POS;

    if (v_sign == MINUS)
    {
        printf("Sign must be %X\n", PLUS);
        return ERROR;
    }
    if (sc_commandValidate(v_command) == ERROR)
    {
        printf("Invalid command\n");
        return ERROR;
    }

    *sign = v_sign;
    *command = v_command;
    *operand = v_operand;

    return OK;
}
