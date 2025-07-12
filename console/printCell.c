#include <stdio.h>
#include "../mySimpleComputer/sc_constants.h"
#include "../mySimpleComputer/sc_variables.h"

void sc_printCell(int address)
{
    if (address >= RAM_MIN_ADDRESS && address <= RAM_MAX_ADDRESS)
    {
        printf("%d\n", RAM[address]);
    }
}
