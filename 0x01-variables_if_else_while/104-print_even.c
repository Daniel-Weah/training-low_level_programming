#include <stdio.h>

int print_even(void);

int main(void)
{
	printf("%d", print_even());
	return (0);
}

int print_even(void)
{
    int num = 2;

    while (num <= 100)
    {
        if (num % 2 == 0)
        {
            if (num >= 10 && num <= 99)
            {
                int first_num = num / 10;
                int second_num = num % 10;
                putchar(first_num + '0');
                putchar(second_num + '0');
            }
            else if (num < 10)
            {
                putchar(num + '0');
            }
            else
            {
                putchar((num / 100) + '0');
                putchar(((num / 10) % 10) + '0');
                putchar((num % 10) + '0');
            }

            if (num < 100 - 1)
            {
                putchar(',');
                putchar(' ');
            }
        }

        num++;
    }

    putchar('\n');
    return 0;
}

