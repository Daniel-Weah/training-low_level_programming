#include "main.h"

/**
 *puts_half - write a function that prints half of the string
 *@str: string of char parameter for holding the string
 */

void puts_half(char *str)
{
	int n = 0;
	int i;

	while (str[n] != '\0')
	{
		n++;
	}

	for (i = n / 2; i < n; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
