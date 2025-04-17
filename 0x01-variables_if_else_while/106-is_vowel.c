#include <stdio.h>

int is_vowel(char c);

int main(void)
{
	printf("%d\n", is_vowel('A'));
	printf("%d\n", is_vowel('z'));
	return (0);
}

int is_vowel(char c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + ('a' - 'A');

	if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
		return (1);
	return (0);
}
