#include "main.h"

/**
 * _abs - function definition
 * @n: number to check positive or negative
 * Return: 0
 */

int _abs(int n)
{
	if (n >= 0)
	{
		_putchar(n);
		_putchar('\n');
	}
	else
	{
		n = n * -1;
		_putchar(n);
		_putchar('\n');
	}
	return (0);
}
