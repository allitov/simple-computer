#include <stdio.h>
#include "../include/constants.h"
#include "../include/mySimpleComputer.h"
#include "./sc_constants.h"
#include "./sc_variables.h"

int sc_memorySave(const char *filename)
{
    if (filename == NULL)
    {
        return ERROR;
    }

    FILE *file = fopen(filename, "wb");

    if (file == NULL)
    {
        return ERROR;
    }

    const size_t res = fwrite(RAM, sizeof(int), RAM_SIZE, file);

    fclose(file);

    if (res != RAM_SIZE)
    {
        return ERROR;
    }

    return OK;
}
