#include "lists.h"
/**
 * print_list - prints all elements of a list
 * @h: pointer to head of list
 *
 * Return: number of nodes in list
 */
size_t print_list(const list_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		c++;
	}
	return (c);
}
