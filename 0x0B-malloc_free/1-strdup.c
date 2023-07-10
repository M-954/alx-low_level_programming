#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *_strdup - creates a duplicate of string
 * @str: pointer to the string to be duplicated
 *
 * Return: returns pointer to duplicated string, NULL otherwise
 */
char *_strdup(char *str)
{
	char *dup;

	if (str == 0)
	{
		return (NULL);
	}
	dup = malloc(strlen(str) + 1);

	if (dup == NULL)
	{
		return (NULL);
	}
	strcpy(dup, str);

	return (dup);
}
