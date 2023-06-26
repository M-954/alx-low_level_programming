#include "main.h"
/**
 * *_strcpy - copies string
 * @dest: where to be cpied to
 * @src: copied from
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int y;

	for (y = 0; src[y] != '\0'; y++)
	{
		dest[y] = src[y];
	}
	dest[y++] = '\0';
	return (dest);
}
