#include "lists.h"

/**
 * print_listint - function prints all the elements of a list
 * @h: head node
 * Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	const listint_t *current;
	size_t count = 0;

	if (!h)
	{
		return (0);
	}

	current = h;
	while (current)
	{
		count++;
		printf("%d\n", current->n);
		current = current->next;
	}
	return (count);
}
