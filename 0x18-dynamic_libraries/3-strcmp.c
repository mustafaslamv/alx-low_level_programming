#include "main.h"

/**
 * _strcmp - function compares 2 strings with their ascii code of each char
 * @s1: first string
 * @s2: second string
 * Return: result
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int result = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	result = (s1[i] - s2[i]);

	return (result);
}
