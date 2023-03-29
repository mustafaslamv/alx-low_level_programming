#include "main.h"

/**
 * reverse_array - function to reverse array
 * @a: array
 * @n: size of the given array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int temp = 0;

	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
