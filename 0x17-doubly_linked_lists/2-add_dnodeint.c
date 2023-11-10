#include "lists.h"
/**
 * add_dnodeint - adds node at beginning of a linked list
 * @head: pointer to the head pointer
 * @n: integer
 *
 * Return: returns pointer to newnode, NULL otherwise
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->next = *head;
	newnode->prev = NULL;
	newnode->n = n;
	if (*head != NULL)
	{
		(*head)->prev = newnode;
	}
	*head = newnode;
	return (newnode);
}
