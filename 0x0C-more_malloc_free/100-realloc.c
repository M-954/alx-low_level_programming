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

	if (new_size == old_size)
	{
		return (ptr);
	}
	n = malloc(new_size);
	if (ptr == NULL)
	{
		n = malloc(new_size);
		free(ptr);
		return (n);
	}
	if (new_size > old_size)
	{
		n = malloc(new_size);
			free(ptr);
			return (n);
	}
	if (ptr == NULL)
	{
		n = malloc(new_size);
			free(ptr);
			return (n);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}

