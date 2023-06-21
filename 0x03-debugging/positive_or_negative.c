#include "main.h"
#include <stdio.h>
/**
 * positive_or_negative - prints if number is positive or negative
 * @i: the integer value to be checked
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("positive");
	}
	else if (i < 0)
	{
		printf("negative");
	}
	else
	{
		printf("zero");
	}
	printf("\n");
}
