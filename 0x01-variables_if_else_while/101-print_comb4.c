#include <stdio.h>
/**
 * main - prints possible combinations of three digits
 *
 * Return: 0 Always (success)
 */
int main(void)
{
	int x, y, z;

	for (x = 0; x < 8; x++)
	{
		for (y = x + 1; y < 9; y++)
		{
			for (z = y + 1; z < 10; z++)
			{
				if (x < y && x < z && y < z)
				{
					putchar(x + '0');
					putchar(y + '0');
					putchar(z + '0');
					if (x + y + z < 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
