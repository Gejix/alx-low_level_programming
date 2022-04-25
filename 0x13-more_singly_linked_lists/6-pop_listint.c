#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of a list
 * Return: no return
 */
int pop_listint(listint_t **head)
{
	int headnode;
	listint_t *temp;
	listint_t *list;

	if (*head == NULL)
		return (0);
	list = *head;

	headnode = list->n;

	temp = list->next;

	free(list);

	*head = temp;

	return (headnode);
}
