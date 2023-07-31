#include "lists.h"
/**
 * listint_len - prints number of nodes in a list
 * @h: pointer to struct
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
