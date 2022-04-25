#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning
 * of a linked list.
 * @head: head of the linked list
 * @n: n element
 * Return: Address of the head.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
