#include "lists.h"

/**
 * free_listint - function frees a list.
 * @head: head node
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	if (!head)
	{
		return;
	}
	current = head;
	while (current)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
