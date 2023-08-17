#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a list
 * @head: head of the list
 * @index: index of the node
 * Return: nth node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int indx;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	indx = 0;

	while (head != NULL)
	{
		if (indx == index)
			break;
		head = head->next;
		indx++;
	}

	return (head);
}
