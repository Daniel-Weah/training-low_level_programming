#include "main.h"

/**
 *print_triangle - prints a triangle, followed by a new line
 *@size: holds the size of the triangle
 */

void print_triangle(int size)
{
	int counter;
	int spaces;
	int hashes;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (counter = 0; counter < size; counter++)
	{
		for (spaces = 0; spaces < size - counter - 1; spaces++)
		{
			_putchar('.');

		}
		for (hashes = 0; hashes < counter + 1; hashes++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
	}
}
