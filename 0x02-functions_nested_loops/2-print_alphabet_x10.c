#include "main.h"

/**
 *print_alphabet_x10 - prints the alphabet in lower case 10 times
 */

void print_alphabet_x10(void)
{
	char i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}

		_putchar('\n');

	}
}
