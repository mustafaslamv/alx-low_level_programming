#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: start value
 * @max: end value
 * Return: pointer to memory block contains int array
*/

int *array_range(int min, int max)
{
	int *arr = NULL, items, i;

	items = (max - min) + 1;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int) * items);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < items; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
