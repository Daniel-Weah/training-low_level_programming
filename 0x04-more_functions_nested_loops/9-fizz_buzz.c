#include "main.h"
#include <stdio.h>

/**
 *main - program that prints the numbers from 1 to 100, followed by a new line.
 *Return: return 0
 */

int main(void)
{
	int counter;

	for (counter = 1; counter <= 100; counter++)

		if (counter % 3 == 0 && counter % 5 == 0)
			printf("FizzBuzz ");
		else if (counter % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (counter % 5 == 0)
			printf("Buzz ");
		else
		{
			if (counter < 100)
				printf("%d ", counter);
			else
				printf("%d", counter);
		}

putchar('\n');

return (0);
}
