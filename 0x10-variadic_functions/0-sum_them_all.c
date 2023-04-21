#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of items passed to the function
 * Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i;

	if (n == 0)
	{
		return (0);
	}

	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	return (sum);
}
