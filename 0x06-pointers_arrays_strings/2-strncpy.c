#include "main.h"
/**
 * *_strncpy - copies string from src to dest
 * @dest: destination to copy to
 * @src: source to copy from
 * @n: number of character to copy from source
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int w;

	for (w = 0; src[w] != '\0'; w++)
	{
		if (src[w] < n)
		{
			dest[w] = src[w];
		}
	}
	dest[w++] = '\0';
	return (dest);
}
