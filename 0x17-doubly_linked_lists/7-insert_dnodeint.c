#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of the list
 * @idx: index of the list
 * @n: integer
 * Return: address of the new element, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current_node;
	unsigned int i;

	new_node = NULL;
	if (idx == 0)
		new_node = add_dnodeint(h, n);
	else
	{
		current_node = *h;
		i = 1;
		while (current_node != NULL && i < idx)
		{
			current_node = current_node->next;
			i++;
		}
		if (current_node != NULL || (current_node == NULL && i == idx))
		{
			new_node = malloc(sizeof(dlistint_t));
			if (new_node != NULL)
			{
				new_node->n = n;
				if (current_node == NULL)
				{
					new_node->prev = NULL;
					new_node->next = NULL;
					*h = new_node;
				}
				else
				{
					new_node->prev = current_node;
					new_node->next = current_node->next;
					if (current_node->next != NULL)
						current_node->next->prev = new_node;
					current_node->next = new_node;
				}
			}
		}
	}
	return (new_node);
}
