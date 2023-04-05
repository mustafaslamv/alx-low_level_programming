#include "main.h"

/**
 * helper - prime number check recursive function
 * @n: The number to be checked
 * @factor: The divisor to be tested
 *
 * Return: 1 if it's prime || 0
 */

int helper(int n, int factor)
{
	if (n <= 1)
	{
		return (0);
	}

	if (factor == 1)
	{
		return (1);
	}

	if (n % factor == 0)
	{
		return (0);
	}

	return (helper(n, factor - 1));
}

/**
 * is_prime_number - Check if a number is a prime number
 * @n: The number to be checked
 *
 * Return: helper function
 */

int is_prime_number(int n)
{
	return (helper(n, n / 2));
}
