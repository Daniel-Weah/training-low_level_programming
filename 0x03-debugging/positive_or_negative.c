#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 *positive_or_negative - debugging of the positive_or_negative function
 *@i: holds the value to be checked upon
 *Return - return 0
 */

void positive_or_negative(int i)
{
	if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}


}
