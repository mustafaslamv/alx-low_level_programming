#include "lists.h"

/**
 * my_strlen - custom strlen
 * @str: input string
 * Return: length
*/
size_t my_strlen(const char *str)
{
	size_t len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

/**
 * add_node_end - function that adds a new node at the end
 * @head: start node
 * @str: string to be duplicated
 * Return: new node address || (NULL)
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *ptr = *head;

	new_node = malloc(sizeof(list_t));

	if (!new_node || !head)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = my_strlen(new_node->str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = new_node;
	}

	return (new_node);
}
