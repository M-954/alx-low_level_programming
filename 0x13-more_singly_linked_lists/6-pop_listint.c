#include "lists.h"
/**
 * pop_listint - deletes the headnode of a list
 * @head: double pointer to a list
 *
 * Return: returns the integer from the headnode
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	else
	{
		temp = *head;
		n = temp->n;
		*head = (*head)->next;
		free(temp);
	}
	return (n);
}
