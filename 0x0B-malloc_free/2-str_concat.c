#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenate two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * Return: pointer to string || NULL
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, i, j;
	char *string = NULL;

	if (s1 == NULL)
	{
		s1= "\0";
	}
	else if (s2 == NULL)
	{
		s2 = "\0";
	}

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	string = malloc(1 + (sizeof(char) * (len1 + len2)));
	if (string == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		string[i] = s1[i];
	}
	for (j = 0; j <= len2; j++)
	{
		string[len1 + j] = s2[j];
	}
	return (string);
}
