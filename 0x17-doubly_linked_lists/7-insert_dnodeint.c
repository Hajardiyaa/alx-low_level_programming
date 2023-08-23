#include "lists.h"

/**
 * insert_dnodeint_at_index : Inserts a new node in a given position.
 * @h: head
 * @idx: Index 
 * @n: Int
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp = *h;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (temp && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}

	if (!temp)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = temp->next;
	new_node->prev = temp;
	temp->next = new_node;

	if (new_node->next)
		new_node->next->prev = new_node;

	return (new_node);
}
