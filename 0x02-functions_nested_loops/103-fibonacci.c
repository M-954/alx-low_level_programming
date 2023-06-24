#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 Always (success)
 */
int main(void)
{
	int j = 0;

	long num1, num2, sum;

	num1 = 1;

	num2 = 2;

	sum = num2;

	while (num2 + num1 < 4000000)
	{
		num2 = num2 + num1;

		if (num2 % 2 == 0)
			sum = sum + num2;

		num1 = num2 - num1;

		++j;
	}
	printf("%ld\n", sum);
	return (0);
}
