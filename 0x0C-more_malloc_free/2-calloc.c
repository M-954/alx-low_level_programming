#include "main.h"
#include <stdlib.h>
/**
 * *_calloc - allocates memory to an array
 * @nmemb: array elements
 * @size: byte size
 *
 * Return: returns pointer to array, NULL otherwise
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;

	unsigned int j;

	unsigned int l;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	l = nmemb * size;

	a = malloc(l);

	if (a == NULL)
	{
		return (NULL);
	}
	j = 0;

	while (j < l)
	{
		a[j] = 0;
		j++;
	}
	return (a);
}
