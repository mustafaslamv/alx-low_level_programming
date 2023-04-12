#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: character to initialize the array with
 *
 * Return: pointer to array || NULL
 */

char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);
	unsigned int i;

	if (size == 0 || array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
