#include "main.h"
/**
 * print_diagonal - prints a diagonal line
 * @n: number of times to print line
 */
void print_diagonal(int n)
{
	int k;
	int l;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (k = 0; k < n; k++)
		{
			for (l = 0; l < k; l++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
