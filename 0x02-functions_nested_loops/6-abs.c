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
		return (n);
	}
	else
	{
		n = n * -1;
		return (n);
	}
}
