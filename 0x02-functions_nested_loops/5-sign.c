#include "main.h"
/**
 * print_sign - prints out sign +,-,0
 *@n: the number
 *
 *Return: 1 if number is +ve, -1 if negative, o otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
