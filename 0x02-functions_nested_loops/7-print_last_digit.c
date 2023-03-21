#include "main.h"

/**
 * print_last_digit - function definition
 * @n: int number to get it's last digit
 * Return: last digit of a given number
 */

int print_last_digit(int n)
{
	if (n >= 0)
	{
		n = (n % 10);

	}
	else
	{
		n *= -1;
		n = (n % 10);
	}
	_putchar(n + '0');
	return (n);
}
