#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @head: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *head)
{
	size_t num = NULL;

	while (head)
	{
		printf("%d\n", head->n);
		num++;
		head = head->next;
	}

	return (num);
}
