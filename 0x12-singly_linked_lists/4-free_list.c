#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */

void free_list(list_t *head)
{
	list_t *crnt;

	while ((crnt = head) != NULL)
	{
		head = head->next;
		free(crnt->str);
		free(crnt);
	}
}

