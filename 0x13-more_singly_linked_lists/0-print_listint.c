#include "lists.h"
/**
 * print_listint - prints an integer
 * @h: pointer to the struct
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
