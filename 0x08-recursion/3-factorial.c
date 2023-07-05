#include "main.h"
/**
 * factorial - prints factorial of a given number
 * @n: number to calcutae factorial
 *
 * Return: factorial of n, when n < 0 return -1
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	n = n * factorial(n - 1);

	return (n);
}
