#include "lists.h"
/**
 * *get_nodeint_at_index - returns nth node of a list
 * @head: pointer to the list
 * @index: the nth node
 *
 * Return: returns the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;

	temp = head;

	if (temp == NULL)
	{
		return (NULL);
	}

	while (temp != NULL && index > 0)
	{
		temp = temp->next;
		index--;
	}
	return (temp);
}
