#include <stdio.h>

void divisible_3_5(void);

int main(void)
{
	divisible_3_5();
	return (0);
}

void divisible_3_5(void)
{
	int num = 1;

	for (; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			if (num >= 10 && num <= 99)
			{
				int first = num / 10;
				int second = num % 10;

				putchar(first + '0');
				putchar(second + '0');
			} else if (num < 10)
			{
				putchar(num + '0');
			}
			else 
			{
				putchar((num / 100) + '0');
				putchar((num / 100) % 10 + '0');
				putchar((num % 10) + '0');
			}

			if (num < 90)
			{
				putchar(',');
				putchar(' ');
			}
		}
		
	}


	putchar('\n');
}
