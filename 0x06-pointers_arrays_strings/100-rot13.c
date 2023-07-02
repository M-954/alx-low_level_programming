#include "main.h"
/**
 * *rot13 - rotates string in rot13
 * @str: string to be rotated
 *
 * Return: rotated string
 */
char *rot13(char *str)
{
	int f, r;

	char *letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (f = 0; str[f] != '\0'; f++)
	{
		for (r = 0; letters[r] != '\0'; r++)
		{
			if (letters[r] == str[f])
			{
				str[f] = rot13[r];
				break;
			}
		}
	}
	return (str);
}
