#include "main.h"
/**
 * _strspn - prints length of prefix substring
 * @s: the string to check the length
 * @accept: accepted characters to check
 *
 * Return: length of s with accepted characters
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	int found;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				found = 1;
				break;
			}
		}
		if (found == 0)
			break;
	}
	return (i);
}
