#include "../include/constants.h"
#include "../include/myBigChars.h"

int bc_bigcharwrite(int fd, int *big, int count)
{
    if (write(fd, big, count * sizeof(int) * 2) != count * sizeof(int) * 2)
    {
        return ERROR;
    }
    return OK;
}
