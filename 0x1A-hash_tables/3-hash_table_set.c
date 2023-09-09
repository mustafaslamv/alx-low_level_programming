#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to a hash table
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 0 | 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *nnode, *cnode;
	unsigned long int i;

	if (!ht || !key)
		return (FAIL);

	i = key_index((unsigned char *)key, ht->size);
	cnode = ht->array[i];

	nnode = hash_node_create(key, value);
	if (!nnode)
		return (FAIL);
	if (!cnode)
	{
		ht->array[i] = nnode;
		return (SUCCESS);
	}
	while (cnode)
	{
		if (!strcmp(cnode->key, key))
		{
			free(cnode->value);
			cnode->value = strdup(value);
			free_node(nnode);
			return (SUCCESS);
		}
		cnode = cnode->next;
	}
	nnode->next = ht->array[i];
	ht->array[i] = nnode;

	return (SUCCESS);
}
