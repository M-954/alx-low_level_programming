#include "main.h"
/**
 * print_numbers - prints 0 - 9
 */
void print_numbers(void)
{
	int t = 0;

	while (t <= 9)
	{
		_putchar(t + '0');
		t++;
	}
	_putchar('\n');
}
