#include <stdio.h>
#include "../include/mySimpleComputer.h"
#include "./sc_constants.h"
#include "sc_variables.h"

int sc_memoryLoad (char * filename)
{
    if (filename == NULL)
    {
        return -1;
    }

    FILE *file = fopen(filename, "rb");

    if (file == NULL)
    {
        return -1;
    }

    size_t res = fread(RAM, sizeof(int), RAM_SIZE, file);

    fclose(file);
    if (res != RAM_SIZE)
    {
        return -1;
    }
    return 0;
}