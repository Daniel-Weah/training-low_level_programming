#include "main.h"

/**
 *_puts - prints a string, followed by a new line, to stdout.
 *@str: holds the value of the string
 */

void _puts(char *str)
{
	int i = 0, j;

	while (str[i] != '\0')
		i++;
	for (j = 0; j < i; j++)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
