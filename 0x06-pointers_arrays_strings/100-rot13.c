#include "main.h"
/**
 * *rot13 - rotates string in rot13
 * @str: string to be rotated
 *
 * Return: rotated string
 */
char *rot13(char *str)
{
	int f;

	for (f = 0; str[f] != '\0'; f++)
	{
		if ((str[f] >= 'a' && str[f] <= 'm') || (str[f] >= 'A' && str[f] <= 'M'))
		{
			str[f] += 13;
		}
		else if ((str[f] >= 'n' && str[f] <= 'z') ||
			(str[f] >= 'N' && str[f] <= 'Z'))
		{
			str[f] -= 13;
		}
	}
	return (str);
}
