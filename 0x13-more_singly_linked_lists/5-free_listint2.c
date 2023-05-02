#include "lists.h"

/**
 * free_listint2 - function frees a list.
 * @head: head node
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (!head || !*head)
	{
		return;
	}

	current = *head;

	while (current)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}
	head = NULL;
}
