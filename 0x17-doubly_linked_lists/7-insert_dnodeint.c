#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts node at given index
 * @h: double pointer to header
 * @idx: index
 * @n: integer stored in node
 *
 * Return: pointer of newnode
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *temp;
	unsigned int count = 0;

	if (*h == NULL)
		return (NULL);
	temp = *h;
	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	while (temp->next && count < idx - 1)
	{
		temp = temp->next;
		count++;
	}
	if (count < idx - 1)
	{
		free(newnode);
		return (NULL);
	}
	newnode->next = temp->next;
	if (count == idx - 1)
	{
		newnode->next = temp->next;
	}
	if (temp->next != NULL)
		temp->next->prev = newnode;
	newnode->prev = temp;
	newnode->n = n;
	temp->next = newnode;
	return (newnode);
}
