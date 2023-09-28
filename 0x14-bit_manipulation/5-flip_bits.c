#include "main.h"
/**
 * flip_bits - returns number of bits to flip
 * @n: integer one
 * @m: integer two
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k, i;
	unsigned long int c;
	unsigned long int l;

	i = 0;
	l = n ^ m;
	for (k = 63; k >= 0; k--)
	{
		c = l >> k;
		if (c & 1)
			i++;
	}
	return (i);
}
