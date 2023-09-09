#include "hash_tables.h"

/**
 * hash_table_get - function that gives you the value of a key
 * @ht: hash table
 * @key: key
 * Return: 0 | cnode->value
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *cnode;

	if (!ht || !key)
		return (NULL);

	i = key_index((unsigned char *) key, ht->size);

	cnode = ht->array[i];

	while (cnode)
	{
		if (!strcmp(cnode->key, key))
			return (cnode->value);
		cnode = cnode->next;
	}

	return (NULL);
}
