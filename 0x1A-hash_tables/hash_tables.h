#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SUCCESS 1
#define FAIL 0

/**
 * struct hash_node_s - Node of a hash table
 * @key: The key, string
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
*/
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table
 * @size: The size of the array
 * @array: An array of size @size
*/
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

hash_node_t *hash_node_create(const char *key, const char *value);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);
hash_table_t *hash_table_create(unsigned long int size);
void initialize_table(hash_table_t *table);
void free_node(hash_node_t *node);

/**
 * struct shash_node_s - hash table node
 * @key: The key
 * @value: The value
 * @snext: A pointer to the next node
 * @sprev: A pointer to the previous node
 * @next: A pointer to the next node
*/
typedef struct shash_node_s
{
	char *key;
	char *value;
	struct shash_node_s *next;
	struct shash_node_s *sprev;
	struct shash_node_s *snext;
} shash_node_t;

/**
 * struct shash_table_s - Sorted hash table
 * @size: The size of the array
 * @array: An array of size @size
 * @shead: A pointer to the head node
 * @stail: A pointer to the tail node
*/
typedef struct shash_table_s
{
	unsigned long int size;
	shash_node_t **array;
	shash_node_t *shead;
	shash_node_t *stail;
} shash_table_t;

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);
shash_node_t *shash_node_create(const char *key, const char *value);
void initialize_sorted_table(shash_table_t *table);
void sort_hash_table(shash_table_t *table, shash_node_t *new_node);
void shash_table_print_rev(const shash_table_t *ht);
void free_sorted_node(shash_node_t *node);

#endif
