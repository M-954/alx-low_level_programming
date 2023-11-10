#include "lists.h"
/**
 * add_dnodeint_end - inserts a node at the end
 * @head: double pointer to head
 * @n: integer
 *
 * Return: returns pointer to newnode, NULL otherwise
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *temp;

	temp = *head;
	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->next = NULL;
	newnode->n = n;
	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newnode;
	newnode->prev = temp;
	return (newnode);
}
