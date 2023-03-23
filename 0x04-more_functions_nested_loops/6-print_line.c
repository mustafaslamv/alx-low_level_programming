#include "main.h"

/**
 * print_line - print n number of '_' followed by new line
 * @n: number of characters to print
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
			_putchar('\n');
		}
	}
}
