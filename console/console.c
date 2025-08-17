#include "./console.h"

#include <stdio.h>

#include "../include/constants.h"
#include "../include/mySimpleComputer.h"
#include "../include/myTerm.h"
#include "../include/myBigChars.h"

int main()
{
    bc_box(2, 2, 10, 80, WHITE, VIOLET, "TFFFF", WHITE, VIOLET);
    int big[2] = {0};
    bc_setbigcharpos(big, 0, 0, 1);
    bc_setbigcharpos(big, 0, 3, 1);
    int value;
    bc_getbigcharpos(big, 0, 0, &value);
    printf("%d\n", value);
     bc_printbigchar(big, 4, 10, RED, WHITE);
    return OK;
}
