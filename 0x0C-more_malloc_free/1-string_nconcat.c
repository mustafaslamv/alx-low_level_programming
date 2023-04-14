#include "main.h"
#include <stdlib.h>

/**
 * length - function returns length of string
 * @str: input string
 * Return: string length
*/

int length(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of charachters to concat from s2
 * Return: pointer to new memory block
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string = NULL;
	unsigned int len1, len2, i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = length(s1);
	len2 = length(s2);
	printf("len1 : %d\n", len1);
	printf("len2 : %d\n", len2);
	if (n >= len2)
	{
		n = len2;
	}
	string = malloc(sizeof(char) * (len1 + n + 1));

	if (string == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		string[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		string[len1 + j] = s2[j];
	}

	string[len1 + n] = '\0';

	return (string);
}
