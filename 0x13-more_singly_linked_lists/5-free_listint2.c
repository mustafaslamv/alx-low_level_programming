#include "lists.h"

/**
 * free_listint2 - function frees a list.
 * @head: head node
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (!*head)
	{
		return;
	}
	current = *head;
	while (current)
	{
		*head = current->next;
		free(current);
		current = *head;
	}
}
