#include "lists.h"

/**
 * listint_len - returns number of the elements in list.
 * @h: head of list.
 * Return: numbers of nodes.
 */

size_t listint_len(const listint_t *h)
{
	size_t numnodes;

	numnodes = 0;

	while (h != NULL)
	{
		h = h->next;
		numnodes++;
	}
	return (numnodes);
}
