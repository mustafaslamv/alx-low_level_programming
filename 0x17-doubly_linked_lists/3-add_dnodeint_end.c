#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the beginning of a list
 * @head: head of the list
 * @n: integer
 * Return: address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current;
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	current = *head;
	if (current != NULL)
	{
		while (current->next != NULL)
			current = current->next;
		current->next = node;
	}
	else
	{
		*head = node;
	}

	node->prev = current;

	return (node);
}
