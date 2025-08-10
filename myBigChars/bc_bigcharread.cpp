#include "../include/constants.h"
#include "../include/myBigChars.h"

int bc_bigcharread(int fd, int *big, int need_count, int *count)
{
    *count = read(fd, big, need_count * sizeof(int) * 2) / (sizeof(int) * 2);
    if (*count > 0)
    {
        return OK;
    }
    else
    {
        return ERROR;
    }
}
