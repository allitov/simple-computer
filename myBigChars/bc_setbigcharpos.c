//
// Created by Kvell on 08.08.2025.
//
#include "../include/myBigChars.h"
#include "../include/constants.h"

int bc_setbigcharpos(int *big, int x, int y, int value) {
    if (x < 0 || x >= 7 || y < 0 || y >= 7) return ERROR;
    if (value != 0 && value != 1) return ERROR;

    int index = x / 4;
    int bit_pos = (x % 4) * 8 + y;

    if (value) {
        big[index] |= (1 << bit_pos);
    } else {
        big[index] &= ~(1 << bit_pos);
    }

    return OK;
}
