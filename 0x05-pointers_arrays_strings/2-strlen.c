#include "main.h"

/**
 *_strlen - Write a function that returns the length of a string.
 *@s: holds the length of the string
 *Return: return the length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;

	return (length);
}
