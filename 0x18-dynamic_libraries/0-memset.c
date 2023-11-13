#include "main.h"
/**
 * *_memset - sets memory with specific byte
 * @s: pointer to memory block to set
 * @b: the byte to set
 * @n: number of bytes to set
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;

	}
	return (s);
}
