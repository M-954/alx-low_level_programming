#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 Always (success)
 */
int main(void)
{
	int i, num;

	unsigned long n1, n2, nextnum;

	n1 = 1;

	n2 = 2;

	num = 50;

	printf("%lu, %lu, ", n1, n2);

	for (i = 3; i <= 50; i++)
	{
		nextnum = n1 + n2;

		printf("%lu, ", nextnum);
		n1 = n2;

		n2 = nextnum;

	}
	printf("\n");
	return (0);
}
