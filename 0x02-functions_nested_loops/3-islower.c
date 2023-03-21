#include "main.h"

/**
 * _islower - function definition
 * @c: character ascii code
 * Return: (1: character is lowercase, 0: otherwise)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
