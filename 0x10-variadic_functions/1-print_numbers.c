#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - prints all numbers given as arguments
 * @separator: pointer to a string character
 * @n: number of arguments given
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int x;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		printf("%d", x);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
