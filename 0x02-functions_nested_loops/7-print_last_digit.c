#include "main.h"

/**
 * print_last_digit - function definition
 * @n: int number to get it's last digit
 * Return: last digit of a given number
 */

int print_last_digit(int n)
{
	int result;

	if (n < 0)
	{
		result = -1 * (n % 10);
	}
	else
	{
		result = (n % 10);
	}
	_putchar(result + '0');
	return (result);
}
