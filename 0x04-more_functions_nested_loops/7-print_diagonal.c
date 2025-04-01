#include "main.h"

/**
 *print_diagonal - a function that draws a diagonal line on the terminal
 *@n: tells the number of time to print a line
 */

void print_diagonal(int n)
{
	int counter, spaces;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (counter = 0; counter < n; counter++)
		{
			for (spaces = 0; spaces < counter; spaces++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
