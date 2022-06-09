#include "lists.h"

/**
 *dlistint_len - print the elements in the doubly link list
 *@h: double linked list
 *Return: number of elements inside the doubly linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t node = 0;

	if (h == NULL)
		return (node);

	while (h->prev != NULL)
		h = h->prev;
	while (h)
	{
		h = h->next;
		node += 1;
	}
	return (node);
}
