#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - function that returns the number of elements
 * @h: start node
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	const list_t *current;
	size_t count = 0;

	if (h == NULL)
		return (0);

	current = h;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
}
