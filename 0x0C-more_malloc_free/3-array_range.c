#include "main.h"
#include <stdlib.h>
/**
 * *array_range - allocates memory to array of integers
 * @min: minimum integer
 * @max: maximum integer
 *
 * Return: pointer to array, NULL otherwise
 */
int *array_range(int min, int max)
{
	int *p;

	int a;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc(sizeof(int) * (max - min) + sizeof(int));

	if (p == NULL)
	{
		return (NULL);
	}
	for (a = 0; min <= max; a++)
	{
		p[a] = min;

		min++;
	}
	return (p);
}
