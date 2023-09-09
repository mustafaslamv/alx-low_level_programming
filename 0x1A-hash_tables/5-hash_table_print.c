#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: hash table
 * Return: Nothing
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *cnode;
	int flag = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		cnode = ht->array[i];
		while (cnode)
		{
			if (flag)
				printf(", ");
			printf("'%s': '%s'", cnode->key, cnode->value);
			flag = 1;
			cnode = cnode->next;
		}
	}
	printf("}\n");
}
