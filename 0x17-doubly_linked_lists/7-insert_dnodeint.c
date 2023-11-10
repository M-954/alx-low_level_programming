#include "lists.h"
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
	if (*h == NULL && idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	if (*h != NULL && idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	while (temp->next && count < idx - 1)
	{
		temp = temp->next;
		count++;
	}
	if (temp == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = newnode;
	newnode->prev = temp;
	newnode->n = n;
	temp->next = newnode;
	return (newnode);
}
