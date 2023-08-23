#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head:head
 * @index: Index 
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head && count < index)
	{
		head = head->next;
		count++;
	}

	return ((count == index) ? head : NULL);
}
