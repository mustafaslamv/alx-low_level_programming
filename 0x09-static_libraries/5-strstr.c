#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: pointer to string
 * @needle: pointer to substring
 * Return: beginning of substring in haystack || NULL if !found
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;

	while (haystack[i] != '\0')
	{
		j = i;
		while (haystack[j] != '\0' && needle[j - i] != '\0')
		{
			if (haystack[j] != needle[j - i])
			{
				break;
			}
			j++;
		}
		if (needle[j - i] == '\0')
		{
			return (haystack + i);
		}
		i++;
	}
	return (0);
}
