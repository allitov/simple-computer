#include <stdio.h>
#include "../include/mySimpleComputer.h"
#include "../include/myTerm.h"
#include "../mySimpleComputer/sc_constants.h"
#include "../mySimpleComputer/sc_variables.h"
#include "./console.h"
#include "../include/enums.h"

int main(void)
{
    sc_memoryInit();
    sc_memorySet(0, 10);
    sc_memorySet(5, 9);
    printCell(0, VIOLET, WHITE);
    printCell(2, RED, WHITE);
    printCell(5, GREEN, WHITE);
    printCell(16, GREEN, WHITE);

    mt_setdefaultcolor();
    mt_setcursorvisible(1);
    mt_delline();

    printAccumulator();
    printFlags();
    printCounters();
    return 0;
}
