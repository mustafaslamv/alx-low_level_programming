#include "lists.h"

/**
 * get_nodeint_at_index - function returns the nth node of a list
 * @head: head node
 * @index: nth node index (starting from 0)
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current;

	if (!head || !index)
	{
		return (NULL);
	}
	current = head;

	for (i = 0; i < index; i++)
	{
		current = current->next;
		if (!current)
		{
			return (NULL);
		}
	}
	return (current);
}
