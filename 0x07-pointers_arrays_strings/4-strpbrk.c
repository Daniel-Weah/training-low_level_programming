#include "main.h"

char *_strpbrk(char *s, char *accept)
{
	char *temp;

	while (*s)
	{
		temp = accept;

		while (*temp)
		{
			if (*s == *temp)
			{
				return (s);
			}

			temp++;
		}

		s++;
	}

	return (0);
}
