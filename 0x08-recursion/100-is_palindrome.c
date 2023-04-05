#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string recursively
 * @s: Pointer to the string
 *
 * Return: Length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * helper - Helps to check if a string is a palindrome recursively
 * @s: Pointer to the string
 * @start: Starting index of the string
 * @end: Ending index of the string
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */

int helper(char *s, int start, int end)
{
	if (s[start] != s[end])
	{
		return (0);
	}
	else if (start >= end)
	{
		return (1);
	}

	return (helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome recursively
 * @s: Pointer to the string
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	if (length <= 1)
	{
		return (1);
	}

	return (helper(s, 0, length - 1));
}
