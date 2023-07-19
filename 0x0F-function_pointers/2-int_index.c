#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index- searches for an integer and compares them
 * @array: pointer to array
 * @size: size of array
 * @cmp: pointer to the function used to compare
 *
 * Return: returns an integer value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]) != 0)
		{
			return (j);
		}
	}
	return (-1);
}
