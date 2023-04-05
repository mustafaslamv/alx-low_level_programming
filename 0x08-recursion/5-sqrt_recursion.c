#include "main.h"

/**
 * helper - Calculates the natural square root of a number
 * @n: input number
 * @base: The current value being tested as the square root of n
 *
 * Return: The natural square root of n || -1 If n does not have one
 */

int helper(int n, int base)
{
	if ((base * base) == n)
	{
		return (base);
	}
	else if ((base * base) < n)
	{
		return (helper(n, base + 1));
	}
	else
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - Calculates the natural square root of a number
 * @n: input number
 *
 * Return: helper function
 */

int _sqrt_recursion(int n)
{
	return (helper(n, 1));
}
