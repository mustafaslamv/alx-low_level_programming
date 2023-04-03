#include "main.h"

/**
 * _strspn - function gets the length of a prefix substring
 * @s: input string
 * @accept: set of characters to search for it.
 * Return: number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, result = 0;
	char *t = accept;

	for (i = 0; t[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (t[i] == s[j])
			{
				t++;
				result++;
				continue;
			}
		}
		if (t[j] == '\0')
		{
			return (result);
		}
	}
	return (result);
}


