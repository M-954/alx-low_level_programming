#include "variadic_functions.h"
#include <stdio.h>
/**
 * p_char - prints character
 * @args: argument
 */
void p_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * p_integer - prints integers
 * @args: argument
 */
void p_integer(va_list args)
{
	printf("%i", va_arg(args, int));
}
/**
 * p_float - prints float
 * @args: argument
 */
void p_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * p_string - prints string
 * @args: argument
 */
void p_string(va_list args)
{
	char *str;

	str = va_arg(args, char*);
	if (str == NULL)
	{
		printf("(nil)");
	}
	printf("%s", str);
}
/**
 * print_all - print everything
 * @format:arguments
 */
void print_all(const char * const format, ...)

{
	unsigned int i, j;
	prnt t[] = {
		{"c", p_char},
		{"s", p_string},
		{"i", p_integer},
		{"f", p_float},
		{NULL, NULL}
	};
	va_list vaargs;
	char *l = "";

	va_start(vaargs, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (t[j].s != NULL)
		{
			if (*(t[j].s) == format[i])
			{
				printf("%s", l);
				t[j].f(vaargs);
				l = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(vaargs);
	printf("\n");
}
