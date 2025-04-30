#include "main.h"

/**
 * _strncat - Concatenates two strings up to n bytes from src.
 * @dest: Destination string.
 * @src: Source string.
 * @n: Number of bytes to use from src.
 *
 * Return: Pointer to resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
    char *ptr = dest;

    while (*ptr)
        ptr++;

    while (*src && n > 0)
    {
        *ptr++ = *src++;
        n--;
    }

    *ptr = '\0';
    return dest;
}

