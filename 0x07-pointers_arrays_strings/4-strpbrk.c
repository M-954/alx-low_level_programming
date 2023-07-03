#include "main.h"
#include <stdio.h>
/**
 * *_strpbrk - searches string for set of bytes
 * @s: pointer to the string to be searched
 * @accept: set of bytes to be searched
 *
 * Return: pointer to byte s matching byte accept, otherwise return NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i, k;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[i] == accept[k])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
