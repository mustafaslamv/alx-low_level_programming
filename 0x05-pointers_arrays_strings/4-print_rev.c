#include "main.h"

/**
 * print_rev - function to print string in reverse order
 * @s: input string
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

