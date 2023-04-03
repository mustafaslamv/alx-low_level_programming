#include "main.h"

/**
 * _strspn - function gets the length of a prefix substring
 * @s: input string
 * @accept: set of characters to search for it.
 * Return: number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, result = 0;
	char prev = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if ((accept[i] == s[j] && accept[i] != prev))
			{
				prev = accept[i];
				result++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (result);
}

