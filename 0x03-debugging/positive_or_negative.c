#include "main.h"
#include <stdio.h>
/**
 * positive_or_negative - prints out if number is positive, negative, or zero
 * @i: integer to be checked
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive", i);
	}
	else if (i < 0)
	{
		printf("%d is negative", i);
	}
	else
	{
		printf("%d is zero", i);
	}
	printf("\n");
}

