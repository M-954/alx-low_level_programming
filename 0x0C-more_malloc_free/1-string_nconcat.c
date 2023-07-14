#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: the size
 *
 * Return: returns pointer to string, otherwise NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;

	unsigned int len1, len2;

	len1 = strlen(s1);

	len2 = strlen(s2);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	if (n >= len2)
	{
		n = len2;
	}

	p = (char *)malloc(sizeof(char) * (len1 + n + 1));

	strcpy(p, s1);

	strncat(p, s2, n);

	if (p == NULL)
	{
		return (NULL);
	}
	return (p);
}
