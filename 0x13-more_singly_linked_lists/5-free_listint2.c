#include "lists.h"

/**
 * free_listint2 - function frees a list.
 * @head: head node
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (!*head)
	{
		return;
	}
	current = *head;
	while (current)
	{
		*head = current->next;
		free(current);
		current = *head;
	}
}
int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    free_listint2(&head);
    printf("%p\n", (void *)head);
    return (0);
}
