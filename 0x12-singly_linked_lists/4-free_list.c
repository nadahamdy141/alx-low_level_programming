#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */

void free_list(list_t *head)
{
	list_t *c;

	while ((c = head) != 0)
	{
		head = head->next;
		free(c->str);
		free(c);
	}
}
