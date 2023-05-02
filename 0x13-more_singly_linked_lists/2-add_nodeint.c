#include "lists.h"

/**
 * add_nodeint - function adds a new node at the beginning
 * @head: head node
 * @n: node value
 * Return: new head address || NULL
*/


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
