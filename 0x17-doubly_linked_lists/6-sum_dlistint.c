#include "lists.h"
/**
 * sum_dlistint - returns the sum of elements in a link
 * @head: pointer to head
 *
 * Return: returns sum of elements
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
