#include "lists.h"
/**
 * *add_node_end - adds new node at end of a list
 * @head: double pointer to list
 * @str: pointer to string
 *
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *s;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	s = malloc(sizeof(list_t));
	if (!s)
	{
		return (NULL);
	}
	s->str = strdup(str);
	s->len = len;
	s->next = NULL;

	if (*head == NULL)
	{
		*head = s;
		return (s);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = s;
	return (s);
}
