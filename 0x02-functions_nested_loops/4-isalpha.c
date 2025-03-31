#include "main.h"

/**
 *_isalpha - tells whether the value of 'c' is an alphabet or not
 *@c: parameter that holds the value to be checked upon
 *Return: returns 1 if it alphabet otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' || c <= 'z') && (c >= 'A' || c >= 'Z'))
	{
		return (1);
	}

	else
		return (0);

}
