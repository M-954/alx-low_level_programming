#include "lists.h"
/**
 * get_dnodeint_at_index - returns a node at given index
 * @head: pointer to head
 * @index: index position for a node
 *
 * Return: returns the node or NULL otherwise
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL && count < index)
	{
		head = head->next;
		count++;
	}
	return (head);
}
