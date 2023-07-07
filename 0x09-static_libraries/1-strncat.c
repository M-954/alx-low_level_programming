#include "main.h"
/**
 * *_strncat - concatenates a string
 * @dest: the destination of string
 * @src: the source of string
 * @n: bytes to use from source
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0' && n > 0)
	{
		*ptr = *src;

		ptr++;
		src++;
		n--;
	}
	*ptr = '\0';
	return (dest);
}
