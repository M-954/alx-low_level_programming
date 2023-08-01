#include "lists.h"
/**
 * *insert_nodeint_at_index - inserts newnode
 * @head: double pointer to the headnode
 * @idx: the nth node
 * @n: the integer to insert
 *
 * Return:returns address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *p, *temp;

	temp = *head;
	p = malloc(sizeof(listint_t));
	if (p == NULL || head == NULL)
	{
		return (NULL);
	}
	p->n = n;
	p->next = NULL;

	if (idx == 0)
	{
		p->next = *head;
		*head = p;
		return (p);
	}
	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			p->next = temp->next;
			temp->next = p;
			return (p);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
