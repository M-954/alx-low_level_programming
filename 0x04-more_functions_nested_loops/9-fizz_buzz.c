#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 *
 * Return: 0 Always (success)
 */
int main(void)
{
	int z;

	z = 1;

	while (z <= 100)
	{
		if (z % 3 == 0 && z % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (z % 3 == 0)
		{
			printf("Fizz");
		}
		else if (z % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", z);
		}
		if (z != 100)
		{
			printf(" ");
		}
		z++;
	}
	printf("\n");
	return (0);
}
