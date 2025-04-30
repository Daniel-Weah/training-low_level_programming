#include "main.h"

/**
 * string_toupper - Converts lowercase letters to uppercase.
 * @str: String to modify.
 *
 * Return: Pointer to modified string.
 */
char *string_toupper(char *str)
{
    char *ptr = str;

    while (*ptr)
    {
        if (*ptr >= 'a' && *ptr <= 'z')
            *ptr -= 32;
        ptr++;
    }

    return str;
}
