#include "lists.h"

/**
 * sum_dlistint - Returns the sum of  data of a dlistint_t.
 * @head:head
 *  Return: Sum of data , otherwise 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
