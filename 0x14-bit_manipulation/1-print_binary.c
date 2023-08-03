#include "main.h"
/**
 * print_binary - prints number in binary
 * @n: number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	int j, c = 0;
	unsigned long int p;

	for (j = 63; j >= 0; j--)
	{
		p = n >> j;
		if (p & 1)
		{
			_putchar('1');
			c++;
		}
		else if (c)
			_putchar('0');
	}
	if (!c)
		_putchar('0');
}
