#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - creates an array of characters
 * @size: size to be allocated in bytes
 * @c: initializer
 *
 * Return: returns pointer to array, NULL otherwise
 */
char *create_array(unsigned int size, char c)
{
	char *p;

	unsigned int i;

	p = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
