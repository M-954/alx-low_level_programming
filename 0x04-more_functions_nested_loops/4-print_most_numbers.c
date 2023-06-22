#include "main.h"
/**
 * print_most_numbers - prints 0 - 9 excluding 2 & 4
 */
void print_most_numbers(void)
{
	int f = 0;

	while (f <= 9)
	{
		if (f != 2 && f != 4)
		{
			_putchar(f + '0');
		}
		f++;
	}
	_putchar('\n');
}
