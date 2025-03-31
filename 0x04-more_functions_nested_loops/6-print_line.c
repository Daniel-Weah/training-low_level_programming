#include "main.h"

/**
 * print_line - prints the line character based on n value
 * @n: holds the value to be used to print the line
 */
void print_line(int n)
{
	int counter;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (counter = 0; counter < n; counter++)
		{
			_putchar('_');
		}

		_putchar('\n');
	}
}
