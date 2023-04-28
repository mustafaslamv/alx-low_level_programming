#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: start node
 */

void free_list(list_t *head)
{
	list_t *ptr = head;
	list_t *next;

	while (ptr != NULL)
	{
		next = ptr->next;
		free(ptr->str);
		free(ptr);
		ptr = next;
	}
}
