#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 * Return: Nothing
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *cnode, *tnode;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		cnode = ht->array[i];
		while (cnode)
		{
			tnode = cnode;
			cnode = cnode->next;
			free_node(tnode);
		}
	}
	free(ht->array);
	free(ht);
}
