#include "hash_tables.h"

/**
 * shash_table_create - function that creates a new hash table
 * @size: size
 * Return: 0 | table
*/
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;

	table = malloc(sizeof(shash_table_t));
	if (!table)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(shash_node_t *) * size);
	if (!table->array)
	{
		free(table);
		return (NULL);
	}

	initialize_sorted_table(table);

	table->shead = NULL;
	table->stail = NULL;

	return (table);
}
/**
 * shash_node_create - function that creates a new node
 * @key: key
 * @value: value
 * Return: 0 | node
*/
shash_node_t *shash_node_create(const char *key, const char *value)
{
	shash_node_t *node = malloc(sizeof(shash_node_t));

	if (!node)
		return (NULL);

	node->key = strdup(key);
	if (!node->key)
	{
		free(node);
		return (NULL);
	}
	node->value = strdup(value);
	if (!node->value)
	{
		free(node->key);
		free(node);
		return (NULL);
	}

	node->next = NULL;
	node->snext = NULL;
	node->sprev = NULL;

	return (node);
}
/**
 * shash_table_set - function that adds an element to a hash table
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 0 | 1
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *nnode, *cnode;
	unsigned long int index;

	if (!ht || !key)
		return (FAIL);

	index = key_index((unsigned char *) key, ht->size);
	cnode = ht->array[index];
	nnode = shash_node_create(key, value);
	if (!nnode)
		return (FAIL);

	if (!cnode)
	{
		ht->array[index] = nnode;
		if (!ht->shead && !ht->stail)
		{
			ht->shead = ht->stail = nnode;
			return (SUCCESS);
		}
		sort_hash_table(ht, nnode);
		return (SUCCESS);
	}

	while (cnode)
	{
		if (!strcmp(cnode->key, key))
		{
			free(cnode->value);
			cnode->value = strdup(value);
			free_sorted_node(nnode);
			return (SUCCESS);
		}
		cnode = cnode->next;
	}
	nnode->next = ht->array[index];
	ht->array[index] = nnode;
	sort_hash_table(ht, nnode);

	return (SUCCESS);
}
/**
 * initialize_sorted_table - initializes a sorted table
 * @table: hash table
 * Return: Nothing
*/
void initialize_sorted_table(shash_table_t *table)
{
	unsigned long int a;

	for (a = 0; a < table->size; a++)
		table->array[a] = NULL;
}
/**
 * sort_hash_table - sorts a hash table
 * @table: hash table
 * @new_node: new node
 * Return: Nothing
*/
void sort_hash_table(shash_table_t *table, shash_node_t *new_node)
{
	shash_node_t *C;

	if (strcmp(new_node->key, table->shead->key) < 0)
	{
		new_node->snext = table->shead;
		table->shead->sprev = new_node;
		table->shead = new_node;
		return;
	}

	C = table->shead;

	while (C && strcmp(new_node->key, C->key) > 0)
		C = C->snext;

	if (!C)
	{
		new_node->snext = NULL;
		new_node->sprev = table->stail;
		table->stail->snext = new_node;
		table->stail = new_node;
		return;
	}

	new_node->snext = C;
	new_node->sprev = C->sprev;
	if (C->sprev != NULL)
		C->sprev->snext = new_node;
	C->sprev = new_node;
}
/**
 * shash_table_get - function that gives you the value of a key
 * @ht: hash table
 * @key: key
 * Return: 0 | cnode->value
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *cnode;

	if (!ht || !key)
		return (NULL);

	index = key_index((unsigned char *) key, ht->size);

	cnode = ht->array[index];

	while (cnode)
	{
		if (!strcmp(cnode->key, key))
			return (cnode->value);

		cnode = cnode->next;
	}

	return (NULL);
}
/**
 * shash_table_print - Prints a hash table
 * @ht: hash table
 * Return: Nothing
*/
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *cnode;
	int flag = 0;

	if (!ht)
		return;

	cnode = ht->shead;

	printf("{");

	while (cnode)
	{
		if (flag)
			printf(", ");
		printf("'%s': '%s'", cnode->key, cnode->value);
		flag = 1;
		cnode = cnode->snext;
	}

	printf("}\n");
}
/**
 * shash_table_print_rev - Prints a hash table in reverse
 * @ht: hash table
 * Return: Nothing
*/
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *cnode;
	int flag = 0;

	if (!ht)
		return;

	cnode = ht->stail;

	printf("{");

	while (cnode)
	{
		if (flag)
			printf(", ");
		printf("'%s': '%s'", cnode->key, cnode->value);
		flag = 1;
		cnode = cnode->sprev;
	}

	printf("}\n");
}
/**
 * free_sorted_node - frees a sorted node
 * @node: node to free
 * Return: Nothing
*/
void free_sorted_node(shash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}
/**
 * shash_table_delete - Deletes a hash table
 * @ht: hash table
 * Return: Nothing
*/
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *cnode, *temp_node;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		cnode = ht->array[i];
		while (cnode)
		{
			temp_node = cnode;
			cnode = cnode->next;
			free_sorted_node(temp_node);
		}
	}
	free(ht->array);
	free(ht);
}
