#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: decimal number to be printed in binary
 */

void print_binary(unsigned long int n)
{
	int i, index, leading_zero_flag;
	unsigned long int mask;

	if (n == 0)
	{
		_putchar('0');
	}

	index = (sizeof(unsigned long int) * 8) - 1;
	mask = 1UL << index;
	leading_zero_flag = 1;

	for (i = index; i >= 0; i--)
	{
		if (n & mask)
		{
			leading_zero_flag = 0;
			_putchar('1');
		}
		else if (!leading_zero_flag)
		{
			_putchar('0');
		}
		mask >>= 1;
	}
}
