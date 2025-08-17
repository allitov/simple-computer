#include "../include/constants.h"
#include "../include/myBigChars.h"

int bc_getbigcharpos(int *big, int x, int y, int *value) {
    if (x < 0 || x > 7 || y < 0 || y > 7) return ERROR;

    int index = x / 4;
    int bit_pos = (x % 4) * 8 + y;

    *value = (big[index] >> bit_pos) & 1;
    return OK;
}
