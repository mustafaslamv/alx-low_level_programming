#include "lists.h"

/**
 * listint_len - function counts the number of elements in a list
 * @h: head node
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;
	const listint_t *current;

	if (!h)
	{
		return (0);
	}
	current = h;
	while (current)
	{
		count++;
		current = current->next;
	}
	return (count);
}

