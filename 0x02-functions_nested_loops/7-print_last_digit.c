#include "main.h"
/**
 * print_last_digit - prints the last digit
 * @g:integer number
 *
 * Return: value of digit
 */
int print_last_digit(int g)
{
	int w;

	w = g % 10;

	if (w < 0)
	{
		_putchar(-w + '0');
		return (-w);
	}
	else
	{
		_putchar(w + '0');
		return (w);
	}
}
