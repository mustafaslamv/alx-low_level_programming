#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to a 2D arr of int
 * @width: width of the array (array of integers)
 * @height: height of the array (array of arrays of integers X_X )
 * Return: a double pointer for 2D arr
 */

int **alloc_grid(int width, int height)
{
	int i, j, k;
	int **arr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		*(arr + i) = malloc(sizeof(int) * width);
	}
	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			*(*(arr + j) + k) = 0;
		}
	}
	return (arr);
}
