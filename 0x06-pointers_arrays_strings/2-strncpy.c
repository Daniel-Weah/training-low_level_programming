#include "main.h"

/**
 * _strncpy - Copies a string up to n bytes.
 * @dest: Destination buffer.
 * @src: Source string.
 * @n: Number of bytes to copy.
 *
 * Return: Pointer to destination buffer.
 */
char *_strncpy(char *dest, char *src, int n)
{
    char *ptr = dest;

    while (*src && n > 0)
    {
        *ptr++ = *src++;
        n--;
    }

    while (n > 0)
    {
        *ptr++ = '\0';
        n--;
    }

    return dest;
}
