#include "lists.h"
/**
 * free_listint - frees a list
 * @head: points to a struct
 */
void free_listint(listint_t *head)
{
	free(head);
}
