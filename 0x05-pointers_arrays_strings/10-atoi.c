#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: the string to convert
 * Return: the integer value
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int result = 0;
	int started = 0;
	
	while (*s)
	{
		if (*s == '-')
        {
            sign *= -1;
        }
        else if (*s >= '0' && *s <= '9')
        {
            started = 1;
            result = result * 10 + (*s - '0');
        }
        else if (started)
        {
            break;
        }
        s++;
    }
    
    return sign * result;
}
