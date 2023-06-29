#include "main.h"
/**
 * *_strcat - concatenates string in dest to src
 * @dest: pointer to destination
 * @src: pointer to source
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	char *ptr;

	ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	if (ptr != dest)
	{
		*ptr = ' ';
		ptr++;
	}
	while (*src != '\0')
	{
		*ptr = *src;

		src++;

		ptr++;
	}
	*ptr = '\0';

	return (dest);
}
