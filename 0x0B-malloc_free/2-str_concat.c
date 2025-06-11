#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: Pointer to newly allocated space with s1 + s2, or NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
    char *concatStr;
    unsigned int s1_len = 0, s2_len = 0, counter1, counter2;

    if (s1 == NULL)
    {
        s1 = "";
    }
    if (s2 == NULL)
    {
        s2 = "";
    }
    while (s1[s1_len] != '\0')
    {
        s1_len++;
    }
    while (s2[s2_len] != '\0')
    {
        s2_len++;
    }

    concatStr = malloc((s1_len + s2_len + 1) * sizeof(char));
    if (concatStr == NULL)
    {
        return NULL;
    }
    for (counter1 = 0; counter1 < s1_len; counter1++)
    {
        concatStr[counter1] = s1[counter1];
    }

    for (counter2 = 0; counter2 < s2_len; counter2++)
    {
        concatStr[counter1 + counter2] = s2[counter2];
    }
    concatStr[counter1 + counter2] = '\0';

    return (concatStr);
}