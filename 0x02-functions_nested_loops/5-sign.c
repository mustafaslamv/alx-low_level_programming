#include "main.h"

/**
 * print_sign - function definition
 * @n: number to check positive or negative
 * Return: (1: positive numbers)(0: zero)(-1: negative numbers)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
