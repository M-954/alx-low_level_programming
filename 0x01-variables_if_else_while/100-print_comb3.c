#include <stdio.h>
/**
 * main - Prints all possible combinations of two digits
 *
 * Return: 0 Always (success)
 */
int main(void)
{
	int c, d;

	for (c = 0; c < 9; c++)
	{
		for (d = c + 1; d < 10; d++)
		{
			if (c < d)
			{
				putchar(c + '0');
				putchar(d + '0');
				if (c + d < 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
