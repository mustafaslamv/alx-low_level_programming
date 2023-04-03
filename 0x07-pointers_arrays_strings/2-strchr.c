#include "main.h"

/**
 * _strchr - function locates a char in a string
 * @s: input string
 * @c: character to search for it.
 * Return: pointer to the first occurence of the char
 */

char *_strchr(char *s, char c)
{
	char *result;
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			result = &s[i];
			return (result);
		}
	}
	return ('\0');
}
