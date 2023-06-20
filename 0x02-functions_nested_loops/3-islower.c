#include "main.h"
/**
 * _islower - checks for lowercase characters
 * @c: character represented in ASCII
 *
 * Return: 1 if chacacter is lowercase. Return 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
		else
		{
			return (0);
		}
}
