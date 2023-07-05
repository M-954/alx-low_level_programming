#include "main.h"
/**
 * confirm - prints natural square root
 * @n: value to print its square root
 * @i: value to confirm squeare root
 *
 * Return: natural squre root of n
 */
int confirm(int i, int n)
{
	if ((i * i) == n)
	{
		return (i);
	}
	if ((i * i) > n)
	{
		return (-1);
	}
	return (confirm(i + 1, n));
}
/**
 * _sqrt_recursion - prints natural square root
 * @n: value to print its square root
 *
 * Return: natural square root of n
 */
int _sqrt_recursion(int n)
{
	return (confirm(1, n));
}
