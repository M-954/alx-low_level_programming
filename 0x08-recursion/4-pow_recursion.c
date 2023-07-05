#include "main.h"
/**
 * _pow_recursion - prints value raised to y
 * @x: value to be returned
 * @y: power to be raised to
 *
 * Return: x raised to y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
