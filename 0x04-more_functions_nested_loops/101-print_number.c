#include "main.h"

/**
 * print_number - print integer using putchar
 *@n: input number
 */

void print_number(int n)
{

	unsigned int result = n;

	if (n < 0)
	{
		_putchar('-');
		result = -result;
	}

	if ((result / 10) > 0)
	{
		print_number(result / 10);
	}
	_putchar((num % 10) + 48);
}
