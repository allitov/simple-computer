#include "./console.h"
#include "../include/constants.h"
#include "../include/mySimpleComputer.h"
#include "../include/myTerm.h"

int main()
{
    mt_clrscr();

    printDecodedCommand(0x7F7F);

    sc_memoryInit();
    sc_memorySet(0, 0x7F7F);
    sc_icounterInit();
    sc_icounterSet(0);
    printCommand();

    return OK;
}
