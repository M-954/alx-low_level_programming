#include "main.h"
/**
 * get_bit - returns value of bit at given index
 * @n: integer value
 * @index: given index
 *
 * Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int a;

	if (index > 63)
		return (-1);
	a = (n >> index) & 1;
	return (a);
}
