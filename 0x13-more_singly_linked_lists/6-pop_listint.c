#include "lists.h"

/**
 * pop_listint - function that pops head
 * @head: head node
 * Return: node value
*/

int pop_listint(listint_t **head)
{
	int n;
	listint_t *old_head = *head;

	if (!head)
	{
		return (0);
	}

	n = (*head)->n;
	*head = (*head)->next;
	free(old_head);
	return (n);
}
