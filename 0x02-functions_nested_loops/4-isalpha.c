#include "main.h"

/**
 * _isalpha - function definition
 * @c: character ascii code
 * Return: (1: character is alphabetic, 0: otherwise)
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
