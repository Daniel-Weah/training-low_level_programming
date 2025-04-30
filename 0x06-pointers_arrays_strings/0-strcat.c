#include "main.h"

/**
 * *_strcat - concatenates two string
 * @dest: first string to join
 * @src: source string
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

    while (*ptr)
        ptr++;

    while (*src)
    {
        *ptr++ = *src++;
    }

    *ptr = '\0';
    return dest;

}
