#include "lists.h"
/**
 * free_listint - frees a list
 * @head: points to a struct
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
