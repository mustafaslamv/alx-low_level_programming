#include "main.h"

/**
 * print_positive_number - Prints a positive integer to the console
 *
 * @num: The positive integer to be printed
 */
void print_positive_number(unsigned int num)
{
	int digit;

	digit = num % 10;

	if (num / 10 > 0)
	{
		print_positive_number(num / 10);
	}
	putchar(digit + '0');
}

/**
 * print_number - Prints an integer to the console
 *
 * @num: The integer to be printed
 */

void print_number(int num)
{
	if (num < 0)
	{
		putchar('-');
		print_positive_number(-num);
	}
	else
	{
		print_positive_number(num);
	}
}

