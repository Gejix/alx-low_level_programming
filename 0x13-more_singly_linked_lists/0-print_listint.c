#include "lists.h"

/**
 * print_listint - prints all the elements of list.
 * @h: head of list.
 * Return: numbers of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t numnodes;

	numnodes = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		numnodes++;
	}
	return (numnodes);
}
