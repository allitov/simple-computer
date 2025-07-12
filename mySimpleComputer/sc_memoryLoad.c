#include <stdio.h>
#include "../include/mySimpleComputer.h"
#include "./sc_constants.h"
#include "sc_variables.h"

int sc_memoryLoad(char *filename)
{
    if (filename == NULL)
    {
        return ERROR;
    }

    FILE *file = fopen(filename, "rb");

    if (file == NULL)
    {
        return ERROR;
    }

    size_t res = fread(RAM, sizeof(int), RAM_SIZE, file);

    fclose(file);
    if (res != RAM_SIZE)
    {
        return ERROR;
    }
    return OK;
}
