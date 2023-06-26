#include "main.h"
/**
 * _puts - prints string in the output
 * @str: the string to be output
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
