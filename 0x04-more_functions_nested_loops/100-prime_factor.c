#include <stdio.h>
#include <math.h>
/**
 * main - entry point
 *
 * Return: 0 Always (success)
 */
int main(void)
{
	long int i = 612852475143;

	long int largestPrimeFactor = 2;

	int k;

	while (i % 2 == 0)
	{
		i = i / 2;
	}
	for (k = 3; k <= sqrt(i); k += 2)
	{
		while (i % k == 0)
		{
			i = i / k;
		}
		largestPrimeFactor = k;
		i = i / k;
	}
	if (i > largestPrimeFactor)
	{
		largestPrimeFactor = i;
	}
	printf("%ld", largestPrimeFactor);
	printf("\n");
	return (0);
}
