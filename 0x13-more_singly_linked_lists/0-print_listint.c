#include "lists.h"
/**
 * print_listint - prints an integer
 * @h: pointer to the struct
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int i;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
	}
	return (i);
}
