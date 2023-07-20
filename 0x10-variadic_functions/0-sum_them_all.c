#include "variadic_functions.h"
/**
 * sum_them_all - sums up all given arguments
 * @n: the number of arguments given
 *
 * Return: returns the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list var;
	unsigned int i;
	int sum = 0;

	va_start(var, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(var, int);
	}
	va_end(var);
	return (sum);
}
