#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at given index
 * @head: pointer to head
 * @index: index
 *
 * Return: 1 0n success, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count = 0;

	temp = *head;
	if (*head == NULL)
		return (-1);

	if (*head != NULL && count == 0)
	{
		(*head) = (*head)->next;
		free(temp);
		return (1);
	}
	while (temp != NULL && count < index)
	{
		temp = temp->next;
		count++;
	}
	if (temp == NULL)
		return (-1);

	
	if (temp->next != NULL)
		temp->next->prev = temp->prev;
	temp->prev->next = temp->next;
	free(temp);
	return (1);
}
