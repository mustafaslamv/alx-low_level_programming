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
	char *array = malloc(size + 1);
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	if (array == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i <= (size + 1); i++)
		{
			array[i] = c;
		}
	}
	return (array);
}
