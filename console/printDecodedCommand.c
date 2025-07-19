#include <stdio.h>
#include "./console.h"

void printDecodedCommand(const int value)
{
    printDec(value);
    printf("\n");
    printBin(value);
    printf("\n");
    printOct(value);
    printf("\n");
    printHex(value);
    printf("\n");
}
