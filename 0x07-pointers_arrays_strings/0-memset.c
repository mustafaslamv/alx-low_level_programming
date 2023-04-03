#include "main.h"

/**
 * *_memset - fills memory with a constant byte.
 * @s: array
 * @b: value to set
 * @n: number of bytes
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			s[i] = b;
		}
	}

	return (s);
}
