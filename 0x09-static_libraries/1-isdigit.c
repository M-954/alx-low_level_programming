#include "main.h"
/**
 * _isdigit - checks if value is a digit
 * @c: the input to be checked
 *
 * Return: 1 if input is digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
