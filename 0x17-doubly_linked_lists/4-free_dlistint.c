#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: head of the list
 * Return: nothing
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp_node;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((temp_node = head) != NULL)
	{
		head = head->next;
		free(temp_node);
	}
}
