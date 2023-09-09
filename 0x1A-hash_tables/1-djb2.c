#include "hash_tables.h"

/**
 * hash_djb2 - hash function implements the djb2 algorithm
 * @str: string
 * Return: Hash
*/
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int H;
	int a;

	H = 5381;
	while ((a = *str++))
	{
		H = ((H << 5) + H) + a;
	}
	return (H);
}
