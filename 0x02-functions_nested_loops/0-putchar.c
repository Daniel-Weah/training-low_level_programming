#include "main.h"

/**
 * main - Entry point. Prints the word '_putchar'
* Return: Always 0 (Success)
*/

int main(void)
{
	char strChar[] = "_putchar";

	int strlength = 0;
	int i;

	while (strChar[strlength] != '\0')
	{
		strlength++;
	}

	for (i = 0; i < strlength; i++)
	{
		_putchar(strChar[i]);
	}
_putchar('\n');

return (0);
}
