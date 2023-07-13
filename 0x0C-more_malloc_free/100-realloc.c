#include "main.h"
#include <stdlib.h>
/**
 * *_realloc - assigns new memory to old memory
 * @ptr: pointer to old memory
 * @old_size: previous allocated size
 * @new_size: new allocated size
 *
 * Return: return pointer to memory allocation, NULL otherwise
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *n;

	unsigned int a;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		n = malloc(new_size);

		if (n == NULL)
			return (NULL);
		return (n);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	n = malloc(new_size);

	if (n == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < old_size && a < new_size; a++)
	{
		n[a] = ((char *) ptr)[a];
	}
	free(ptr);
	return (n);
}
