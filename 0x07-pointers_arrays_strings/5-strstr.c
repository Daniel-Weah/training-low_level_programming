#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to find
 *
 * Return: pointer to beginning of needle in haystack, or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
    char *h, *n;

    if (!*needle)
        return (haystack);

    while (*haystack)
    {
        h = haystack;
        n = needle;

        while (*h == *n && *n)
        {
            h++;
            n++;
        }

        if (!*n)
            return (haystack);

        haystack++;
    }

    return (0);
}
