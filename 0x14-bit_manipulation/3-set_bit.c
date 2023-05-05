#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: pointer to decimal number
 * @index: index of bit to set
 * Return: case (1 || -1)
*/

int set_bit(unsigned long int *n, unsigned int index)
{

	if (index >= 64)
	{
		return (-1);
	}
	*n = *n | (1UL << index);

	return ((*n) ? 1 : -1);

}
