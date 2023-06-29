#include "main.h"
/**
 * *string_toupper - converts lowercase to uppercase
 * @str: the string to be converted
 *
 * Return: the converted string
 */
char *string_toupper(char *str)
{
	int f = 0;

	while (str[f])
	{
		if (str[f] >= 'a' && str[f] <= 'z')
		{
			str[f] -= 32;
		}
		f++;
	}
	return (str);
}
