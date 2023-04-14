#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: number of memory blocks
 * @size: size of each memory block
 * Return: pointer to new allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *memory;
    int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	memory = malloc(size * nmemb);
	if (memory == NULL)
	{
		return (NULL);
	}
    for ( i = 0; i < (nmemb + size); i++)
    {
        memory[i] = 0;
    }
    
	return (memory);
}
