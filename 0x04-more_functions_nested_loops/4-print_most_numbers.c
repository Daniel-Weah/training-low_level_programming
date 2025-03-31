#include "main.h"

/**
 *print_most_numbers - prints numbers from 0 to 9 by skipping 2 and 4
 */

void print_most_numbers(void)
{
	int num = '0';

	for (; num <= '9'; num++)
	{
		if (num == '2' || num == '4')
			continue;
		_putchar(num);
	}

	_putchar('\n');
}
