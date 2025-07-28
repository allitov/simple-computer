#include <stdio.h>
#include "./console.h"

void printOct(const int value)
{
    printf("oct: %05o", value);
    fflush(stdout);
}
