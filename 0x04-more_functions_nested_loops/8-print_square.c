#include "main.h"

/**
 *print_square - prints the size of a square based on 'size' value
 *@size: holds the size of the square
 */

void print_square(int size)
{
	int row;
	int counter;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (row = 0; row < size; row++)
		{
			for (counter = 0; counter < size; counter++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
