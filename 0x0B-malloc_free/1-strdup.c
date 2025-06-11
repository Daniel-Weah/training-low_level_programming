#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: The string to duplicate.
 *
 * Return: Pointer to the duplicated string, or NULL if str is NULL or if memory fails.
 */

char *_strdup(char *str)
{
    char *duplicate;
    unsigned int counter, str_len = 0;

    if (str == NULL)
    {
        return NULL;
    }
    while (str[str_len] != '\0')
    {
        str_len++;
    }
    duplicate = malloc((str_len + 1) * sizeof(char));
    if (duplicate == NULL)
    {
        return NULL;
    }
    for (counter = 0; counter < str_len; counter++)
    {
        duplicate[counter] = str[counter];
    }
    duplicate[counter] = '\0';
    return (duplicate);
}