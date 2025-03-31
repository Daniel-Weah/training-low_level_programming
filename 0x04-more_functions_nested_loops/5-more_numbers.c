#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14, 10 times
 */

void more_numbers(void)
{
	char numbers[] = "01234567891011121314";

	int count = 0;

	int length;

while (count < 10)
{
	length = 0;

	while (numbers[length] != '\0')
	{
		_putchar(numbers[length]);
		length++;
	}
	_putchar('\n');
	count++;
}
}

