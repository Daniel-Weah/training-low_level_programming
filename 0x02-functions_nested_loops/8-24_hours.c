#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - prints the hours and minutes of the day
 */

void jack_bauer(void)
{
	int i, j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			_putchar((i / 10) + '0');
		       _putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j %  10) + '0');
			_putchar('\n');
		}
	}
}
