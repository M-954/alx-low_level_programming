#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at given index
 * @head: double pointer to headnode
 * @index: the index given
 *
 * Return: 1 success and -1 fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *p;
	unsigned int j = 0;

	temp = *head;
	p = NULL;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (j < index - 1)
	{
		if (temp == NULL || (temp->next == NULL))
			return (-1);
		temp = temp->next;
		j++;
	}
	p = temp->next;
	temp->next = p->next;
	free(p);
	return (1);
}
