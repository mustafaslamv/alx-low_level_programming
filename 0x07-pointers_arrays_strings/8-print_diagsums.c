#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the diagonals of a square matrix
 * @a: pointer to the first element of the matrix
 * @size: size of the matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int sum = 0, sum2 = 0;
	int i;
	int *arr = a;

	for (i = 0; i < size; i++)
	{
		sum += arr[i];
		sum2 += arr[size - i - 1];
		arr += size;
	}

	printf("%d, ", sum);
	printf("%d\n", sum2);
}
