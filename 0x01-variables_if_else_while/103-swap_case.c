#include <stdio.h>

char swap_case(char c);

int main(void)
{
	printf("%c\n", swap_case('A'));
	printf("%c\n", swap_case('b'));
	printf("%c\n", swap_case('s'));
	printf("%c\n", swap_case('D'));
	printf("%c\n", swap_case('2'));

	return (0);
}

char swap_case(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
