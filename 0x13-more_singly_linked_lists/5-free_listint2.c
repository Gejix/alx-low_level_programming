#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of a list
 * Return: no return
 */
void free_listint2(listint_t **head)
{
	listint_t *list;
	listint_t *temp;

	if (head != NULL)
	{
		temp = *head;
		while ((list = temp) != NULL)
		{
			temp = temp->next;
			free(list);
		}
		*head = NULL;
	}
}
