#include "lists.h"
/**
 * *add_node - adds new node at the beginning of a list
 * @head: double pointer to a list
 * @str: pointer to string
 *
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *s;
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
	s->next = (*head);
	(*head) = s;

	return (*head);
}
