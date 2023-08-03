#include "main.h"
/**
 * clear_bit - sets value of bit to 0 at given index
 * @n: pointer to integer
 * @index: given index
 *
 * Return: 1 success, -1 failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (-(1UL << index) & *n);
	return (1);
}
