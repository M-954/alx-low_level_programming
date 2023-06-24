#include <stdio.h>
#include <math.h>
/**
 * main - entry point
 *
 * Return: 0 Always (success)
 */
int main(void)
{
	long i = 612852475143;

	long y, maxf;

	double square = sqrt(i);

	for (y = 1; y <= square; y++)
	{
		if (i % y == 0)
		{
			maxf = i / y;
		}
	}
	printf("%ld\n", maxf);
	return (0);
}
