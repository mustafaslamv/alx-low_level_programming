#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicates a string
 * @str: pointer to string
 *
 * Return: pointer to duplicated string || NULL
 */

char *_strdup(char *str)
{
	char *string = NULL;
	int len = 0, i;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	string = malloc(1 + (sizeof(char) * len));

	if (string == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		string[i] = str[i];
	}
	return (string);
}
