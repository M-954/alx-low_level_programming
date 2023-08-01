#include "lists.h"
/**
 * sum_listint - returns sum of all data in list
 * @head: pointer to the headnode
 *
 * Return: returns the sum
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int p, sum = 0;

	temp = head;
	if (temp == NULL)
	{
		return (0);
	}
	while (temp != NULL)
	{
		p = temp->n;
		sum += p;
		temp = temp->next;
	}
	return (sum);
}
