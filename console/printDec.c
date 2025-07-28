#include <stdio.h>
#include "./console.h"

void printDec(const int value)
{
    printf("dec: %05d", value);
    fflush(stdout);
}
