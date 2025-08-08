#include "./console.h"

#include <stdio.h>

#include "../include/constants.h"
#include "../include/mySimpleComputer.h"
#include "../include/myTerm.h"
#include "../include/myBigChars.h"

int main()
{
    int big[2] = {0};
    bc_setbigcharpos(big, 0, 0, 1);
    bc_setbigcharpos(big, 1, 1, 1);
    bc_setbigcharpos(big, 2, 2, 1);
    bc_setbigcharpos(big, 3, 3, 1);
    bc_setbigcharpos(big, 4, 4, 1);
    bc_setbigcharpos(big, 5, 5, 1);
    bc_setbigcharpos(big, 6, 6, 1);
    bc_setbigcharpos(big, 7, 7, 1);
    int value;
    bc_getbigcharpos(big, 0, 0, &value);
    printf("Bit at (0,0): %d\n", value);
    printf("\033[2J");
    bc_printbigchar(big, 5, 10, RED, WHITE);


    return OK;
}
