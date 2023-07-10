#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: returns pointer to concatenated string, NULL otherwise
 */
char *str_concat(char *s1, char *s2)
{
	char *s;

	int length1;

	int length2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	length1 = strlen(s1);

	length2 = strlen(s2);

	s = malloc(sizeof(char) * (length1 + length2) + 1);

	if (s == NULL)
	{
		return (NULL);
	}
	strcpy(s, s1);
	strcat(s, s2);

	return (s);
}
