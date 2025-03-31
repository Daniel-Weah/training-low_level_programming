#include "main.h"

/**
 *_islower - return 1 if 'c' is lower otherwise 0
 *@c: parameter that holds the value to be checked
 *Return: the program returns 1 if 'c' is lower otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	else
	{
		return (0);
	}
}
