#include "main.h"

/**
 *rev_string - write the reverse of a string
 *@s: holds the value of the string
 */
void rev_string(char *s)
{
	int length = 0;
	int reverse;
	int temp;

	while (s[length] != '\0')
		length++;
	for (reverse = 0; reverse < length / 2; reverse++)
	{
		temp = s[reverse];
		s[reverse] = s[length - 1 - reverse];
		s[length - 1 - reverse] = temp;
	}
}

