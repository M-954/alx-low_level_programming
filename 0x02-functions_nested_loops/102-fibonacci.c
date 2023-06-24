#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 Always (success)
 */
int main(void)
{
	int i = 0;

	long num1, num2;

	num1 = 1;

	num2 = 2;

	while (i < 50)
	{
		if (i == 0)
			printf("%ld", num1);
		else if (i == 1)
			printf(", %ld", num2);
		else
		{
			num2 = num2 + num1;

			num1 = num2 - num1;

			printf(", %ld", num2);
		}
		++i;
	}
	printf("\n");
	return (0);
}
