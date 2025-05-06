#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;
	char *temp;

	while (*s)
	{
		found = 0;
		temp = accept;

		while (*temp)
		{
			if (*s == *temp)
			{
				count++;
				found = 1;
				break;
			}
			temp++;
		}

		if (found == 0)
			return (count);
		s++;
	}

	return (count);
}
