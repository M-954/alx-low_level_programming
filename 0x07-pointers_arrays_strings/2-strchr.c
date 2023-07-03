#include "main.h"
#include <stddef.h>
/**
 * *_strchr - finds a character in a given string
 * @s: pointer to the string
 * @c: character to be found
 *
 * Return: return pointer to first occurence of string, otherwise NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
