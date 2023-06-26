#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of a string
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int len = strlen(str);

	int mid = len / 2;

	if (len % 2 != 0)
	{
		mid = (len - 1) / 2;
	}
	for (; mid < len; mid++)
	{
	_putchar(str[mid]);
	}
	_putchar('\n');
}
