#include "lists.h"

/**
 * sum_listint - function that sums all list nodes values
 * @head: head node
 * Return: sum of nodes values
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current;

	if (!head)
	{
		return (0);
	}
	current = head;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
