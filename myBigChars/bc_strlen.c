#include <stddef.h>

#include "../include/constants.h"
#include "../include/myBigChars.h"

int bc_strlen(char* str)
{
    if (str == NULL)
    {
        return ERROR;
    }

    int count = 0;
    while (*str != '\0')
    {
        unsigned char c = (unsigned char)*str;

        if ((c & 0x80) == 0)
        {
            // 1-байтовый символ c (0xxxxxxx)
            str += 1;
        }
        else if ((c & 0xE0) == 0xC0)
        {
            // 2-байтовый символ  c (110xxxxx)
            if ((str[1] & 0xC0) != 0x80) return ERROR;
            str += 2;
        }
        else if ((c & 0xF0) == 0xE0)
        {
            // 3-байтовый символ c (1110xxxx)
            if ((str[1] & 0xC0) != 0x80 || (str[2] & 0xC0) != 0x80) return ERROR;
            str += 3;
        }
        else if ((c & 0xF8) == 0xF0)
        {
            // 4-байтовый символc (11110xxx)
            if ((str[1] & 0xC0) != 0x80 || (str[2] & 0xC0) != 0x80 || (str[3] & 0xC0) != 0x80) return ERROR;
            str += 4;
        }
        else
        {
            return ERROR;
        }

        count++;
    }

    return count;
}
