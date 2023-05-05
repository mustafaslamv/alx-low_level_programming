#include "main.h"

/**
 * flip_bits - XOR basically
 * @n: first number
 * @m: second number
 * Return: number of flipped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int XOR, mask;
	unsigned int count;

	XOR = n ^ m;
	count = 0;
	mask = 1;

	while (XOR != 0)
	{
		if (XOR & mask)
		{
			count++;
		}
		XOR >>= 1;
	}

	return (count);
}
