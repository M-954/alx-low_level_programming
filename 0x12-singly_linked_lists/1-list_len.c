#include "lists.h"
/**
 * list_len - prints out number of elements in a list
 * @h: pointer to the head of list
 *
 * Return: number of elements in a list
 */
size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		a++;
		h = h->next;
	}
	return (a);
}
