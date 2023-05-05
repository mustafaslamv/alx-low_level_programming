#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: pointer to decimal number
 * @index: index of bit to set to zero
 * Return: case (1 || -1)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL ||index >= 64)
	{
		return (-1);
	}
	*n = *n & ~(1UL << index);

	return ((*n) ? 1 : -1);
}
