#include "../include/mySimpleComputer.h"
#include "./sc_constants.h"
#include "sc_variables.h"

void sc_memoryInit()
{
    for (int i = 0; i < RAM_SIZE; i++)
    {
        RAM[i] = 0;
    }
}
