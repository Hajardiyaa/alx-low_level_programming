#include "lists.h"
/*
 * print dlistint : print double linked list 
 * @h:head
 */
size_t print_dlistint(const dlistint *h)
{
	size_t e=0;
	while (h)
	{printf("%d\n" , h->n);
		h = h -> next ;
		e++;
	}
	return (e);
}

