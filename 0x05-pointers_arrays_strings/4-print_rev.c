#include "main.h"

/**
 * print_rev - function to print string in reverse order
 * @s: input string
 */

void print_rev(char *s)
{
	int length = 0;

	while (*s != 0)
	{
		length++;
		s++;
	}

	while (length != 1)
	{
		_putchar(*s);
		length--;
		s--;
	}
	_putchar('\n');

}


