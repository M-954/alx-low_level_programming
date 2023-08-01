#include "lists.h"
/**
 * *reverse_listint - reverses a list
 * @head: double pointer to a headnode
 *
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *a, *b;

	a = NULL;
	b = NULL;
	while (*head)
	{
		b = (*head)->next;
		(*head)->next = a;
		a = *head;
		*head = b;
	}
	*head = a;
	return (*head);
}
