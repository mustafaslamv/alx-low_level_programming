#include "main.h"

/**
 * power - simple power function
 * @base: base
 * @value: power
 * Return: unsigned int result
 */
unsigned int power(int base, int value)
{
	unsigned int result = 1;

	if (value == 0)
	{
		return (1);
	}

	while (value > 0)
	{
		result *= base;
		value--;
	}
	return (result);
}

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: binary number as a string
 * Return: the converted number || 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int length, i, result = 0;

	if (b == NULL)
	{
		return (0);
	}

	length = strlen(b);

	for (i = 0; i < length; i++)
	{
		if (b[i] == '0')
		{
			continue;
		}
		else if (b[i] == '1')
		{
			result += power(2, (length - i - 1));
		}
		else
		{
			return (0);
		}
	}

	return (result);
}
