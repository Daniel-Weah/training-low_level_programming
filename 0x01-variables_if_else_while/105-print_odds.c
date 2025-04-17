#include <stdio.h>

void print_odd(void);

int main(void)
{
	print_odd();
	return (0);
	
}

void print_odd(void)
{
	int num = 1;

	while (num <= 99)
	{
		if (num % 2 != 0)
		{
			if (num > 9)
			{
				int first = num / 10;
				int second = num % 10;
				putchar(first + '0');
				putchar(second + '0');
			} else
			{	
				putchar(num + '0');
			}

			if (num < 99)
			{
				putchar(',');
				putchar(' ');
			}

		}
	
		num++;
	}

	putchar('\n');
	
}
