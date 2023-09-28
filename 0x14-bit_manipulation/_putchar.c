#include "main.h"
/**
 * _putchar - prints a character
 * @c: the character to be printed
 *
 * Return: returns number of bytes written, 0 on failure
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
