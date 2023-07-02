#include "main.h"
/**
 * print_number - prints an integer
 * @n: the integer
 */
void print_number(int n)
{
	unsigned int dig = n;

	if (n < 0)
	{
		_putchar('-');
		dig = -dig;
	}
	if (dig / 10 != 0)
	{
		print_number(dig / 10);
	}
	_putchar(dig % 10 + '0');
}
