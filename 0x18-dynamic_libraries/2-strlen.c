#include "main.h"

/**
 * _strlen - function to print string length
 * @s: input string
 * Return: result
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != 0)
	{
		length++;
		s++;
	}
	return (length);
}

