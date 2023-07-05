#include "main.h"
#include <string.h>
/**
 * _strlen_recursion - prints length of string
 * @s: string whose lenth is to be printed
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int length;

	if (*s == '\0')
	{
		return (0);
	}
	length = _strlen_recursion(s + 1);

	return (length + 1);
}
