#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: decimal number
 * @index: index of bit to check
 * Return: bit value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int result = n & (1UL << index);

	if (index >= 64)
	{
		return (-1);
	}
	if (result > 0)
	{
		return (1);
	}
	else if (result == 0)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}
