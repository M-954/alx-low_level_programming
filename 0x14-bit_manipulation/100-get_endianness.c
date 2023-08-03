#include "main.h"
/**
 * get_endianness - checks for endianness
 *
 * Return: 0 big endian, 1 small endian
 */
int get_endianness(void)
{
	unsigned int a;
	char *p;

	a = 1;
	p = (char *) &a;
	return (*p);
}
