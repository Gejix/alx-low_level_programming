#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: head of a list.
 *
 * Return: pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *nextt;

	prev = NULL;
	nextt = NULL;

	while (*head != NULL)
	{
		nextt = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = nextt;
	}

	*head = prev;
	return (*head);
}
