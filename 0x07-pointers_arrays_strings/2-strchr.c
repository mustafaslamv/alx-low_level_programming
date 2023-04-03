#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string to search
 * @c: the character to locate
 *
 * Return: a pointer to the first occurrence || NULL if not found
 */

char *_strchr(char *s, char c)
{
	char *result;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			result = &s[i];
			return (result);
		}
	}
	return (NULL);
}
