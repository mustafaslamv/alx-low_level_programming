#include "function_pointers.h"

/**
 * array_iterator - func executes a func given as a parameter on array elements
 * @array: an array
 * @size: size of the array
 * @action: passed pointer to a function
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}

}
