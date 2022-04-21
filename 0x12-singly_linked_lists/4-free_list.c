#include "lists.h"

/**
 * free_list - frees alist
 * @head: head of the liked list
 * Return: no return
 */
void free_list(list_t *head)
{
	list_t *list;

	while ((list = head) != NULL)
	{
		head = head->next;
		free(list->str);
		free(list);
	}
}
