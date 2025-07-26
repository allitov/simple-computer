#include "../include/constants.h"
#include "../include/mySimpleComputer.h"
#include "sc_commands.h"

int sc_commandValidate(const int command)
{
    switch (command)
    {
    case NOP:
    case CPUINFO:
    case READ:
    case WRITE:
    case LOAD:
    case STORE:
    case ADD:
    case SUB:
    case DIVIDE:
    case MUL:
    case JUMP:
    case JNEG:
    case JZ:
    case HALT:
        return OK;
    default:
        return ERROR;
    }
}
