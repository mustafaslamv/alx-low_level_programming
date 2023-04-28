#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


size_t my_strlen(const char *str)
{
	size_t len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return len;
}

/**
 * add_node - function that adds a new node at the beginning
 * @head: start node
 * @str: string to be duplicated
 * Return: new node address || (NULL)
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL || head == NULL)
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
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
