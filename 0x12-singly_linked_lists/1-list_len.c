#include "lists.h"

/**
 * list_len - prints number of elements in list_t list
 *
 * @h: singly linked list
 *
 * Return: number of elements in the list
 *
 */

size_t list_len(const list_t *h)
{
	size_t elements;

	elements = 0;
	while (h != NULL)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
