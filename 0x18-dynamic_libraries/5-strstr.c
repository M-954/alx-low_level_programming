#include "main.h"
#include <stdio.h>
/**
 * *_strstr - locates a substring
 * @haystack: pointer to the string to be searched
 * @needle: pointer to the substring to be found
 *
 * Return: pointer to beginning of substring, otherwise NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	while (*haystack != '\0')
	{
		i = 0;

		j = 0;

		while (needle[i] != '\0' && needle[i] == haystack[j])
		{
			i++;
			j++;
		}
		if (needle[i] == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
