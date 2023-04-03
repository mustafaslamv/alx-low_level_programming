#include "main.h"

/**
 * _strspn - function gets the length of a prefix substring
 * @s: input string
 * @accept: set of characters to search for it.
 * Return: number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		int found = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				found = 1;
				break;
			}
		}
		if (!found)
		{
			break;
		}
	}

	return (count);
}

