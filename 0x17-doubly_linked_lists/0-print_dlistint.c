#include "lists.h"

/**
 * print_dlistint_betty_style -  Prints all the elements of a dlistint_t list.
 *
 * @h: head of the list
 * Return:  the number of nodes
 */
size_t print_dlistint_betty_style(const dlistint_t *h)
{
	int count;

	/* Check if the list is empty. */
	if (h == NULL)
	{
		return (count);
	}

	/* Iterate through the list and print each node. */
	for (dlistint_t *node = h; node != NULL; node = node->next)
	{
		printf("%d\n", node->n);
		count++;
	}

	return (count);
}
