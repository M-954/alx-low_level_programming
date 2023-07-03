#include "main.h"
/**
 * *_memcpy - copies given bytes from source to destination
 * @dest: the destination to be copied to
 * @src: source to copied from
 * @n: number of bytes to copy
 *
 * Return: return dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int z;

	for (z = 0; z < n; z++)
	{
		dest[z] = src[z];
	}
	return (dest);
}
