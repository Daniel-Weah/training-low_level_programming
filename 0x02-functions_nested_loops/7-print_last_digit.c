#include "main.h"

/**
 * print_last_digit - return the last digit of a number
 * @n: holds the value of the last digit
 *Return: return the value of the last digit
 */
int print_last_digit(int n)
{
	int last;

	if (n < 0)
	{
		last = n % 10;
		last = -last;
	}
	else if (n >= 0 && n <= 99)
	{
		last = n % 10;
	}
	else if (n >= 100 && n <= 999)
	{
		last = n % 100;
	}
	else
	{
		last = n % 1000;
	}
	_putchar(last + '0');
	return (last);
}
