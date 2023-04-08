#include "main.h"

/**
 * *_memcpy - copies memory area.
 * @dest: resulted array
 * @src: source
 * @n: number of bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			dest[i] = src[i];
		}

	}

	return (dest);
}
