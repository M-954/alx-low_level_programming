#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - prints all strings given as arguments
 * @separator: pointer to a string
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int j;
	char *m;

	va_start(args, n);

	for (j = 0; j < n; j++)
	{
		m = va_arg(args, char*);
		if (m == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", m);
		}
		if (separator != NULL && j < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
