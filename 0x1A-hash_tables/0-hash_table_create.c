#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: size of the array
 * Return: pointer to the new hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = malloc(sizeof(hash_table_t));

	if (!hash_table)
		return (NULL);

	hash_table->size = size;
	hash_table->array = malloc(size * sizeof(hash_node_t *));
	if (!hash_table->array)
	{
		free(hash_table);
		return (NULL);
	}

	initialize_table(hash_table);

	return (hash_table);
}

/**
 * hash_node_create - Creates a hash node
 * @key: key
 * @value: value
 * Return: pointer to the new hash node
*/
hash_node_t *hash_node_create(const char *key, const char *value)
{
	hash_node_t *hash_node = malloc(sizeof(hash_node_t));

	if (!hash_node)
		return (NULL);

	hash_node->key = strdup(key);
	if (!hash_node->key)
	{
		free(hash_node);
		return (NULL);
	}
	hash_node->value = strdup(value);
	if (!hash_node->value)
	{
		free(hash_node->key);
		free(hash_node);
		return (NULL);
	}

	hash_node->next = NULL;

	return (hash_node);
}

/**
 * free_node - frees a hash node
 * @node: pointer to the hash node
 * Return: void
*/
void free_node(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}

/**
 * initialize_table - initializes a hash table
 * @table: pointer to the hash table
 * Return: void
*/
void initialize_table(hash_table_t *table)
{
	unsigned long int c;

	for (c = 0; c < table->size; c++)
		table->array[c] = NULL;
}
