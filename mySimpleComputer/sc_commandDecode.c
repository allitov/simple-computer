#include <stdio.h>
#include "../include/mySimpleComputer.h"
#include "./sc_constants.h"

int sc_commandDecode(const int value, int* sign, int* command, int* operand)
{
    if (value < 0 || value > 0x3FFF)
    {
        printf("Invalid command value\n");
        return ERROR;
    }

    const int v_sign = value & MINUS << SIGN_POS;
    const int v_command = (value & COMMAND_MAX << COMMAND_POS) >> COMMAND_POS;
    const int v_operand = value & OPERAND_MAX << OPERAND_POS;

    if (sc_commandValidate(v_command) == ERROR)
    {
        printf("Nonexistent command\n");
        return ERROR;
    }

    *sign = v_sign;
    *command = v_command;
    *operand = v_operand;

    return OK;
}
