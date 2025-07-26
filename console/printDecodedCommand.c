#include "../include/myTerm.h"
#include "./console.h"

// TODO: посчитать x в goto
void printDecodedCommand(const int value)
{
    mt_gotoXY(1, 17);
    // TODO: если минус, то не выводится один ноль. Только 4 цифры
    printDec(value);

    mt_gotoXY(15, 17);
    printBin(value);

    mt_gotoXY(40, 17);
    printOct(value);

    mt_gotoXY(55, 17);
    printHex(value);
}
