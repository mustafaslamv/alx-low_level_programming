#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a
 * dlistint_t list
 * @head: head of the list
 * Return: result
*/
int sum_dlistint(dlistint_t *head)
{
	int result;

	result = 0;
	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
		while (head != NULL)
		{
			result += head->n;
			head = head->next;
		}
	}
	return (result);
}
