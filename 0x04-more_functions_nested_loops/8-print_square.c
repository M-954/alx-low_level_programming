#include "main.h"
/**
 * print_square - prints a square
 * @size: size of square
 */
void print_square(int size)
{
	int a, d;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (d = 0; d < size; d++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

