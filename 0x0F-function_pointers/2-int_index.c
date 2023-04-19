#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: an array
 * @size: size of the array
 * @cmp: passed pointer to a function
 * Return: index of matched elements || (-1)
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int (*func)(int) = cmp;

	if (size <= 0)
	{
		return (-1);
	}

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (func(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
