#include "main.h"

/**
 *_abs - prints the absolute value of a number
 *@number: parameter that holds the value to calculate
 *Return: return only absolute value
 */

int _abs(int number)
{
	if (number < 0)
	{
		return (-number);
	}
	else
		return (number);
}
