#include "main.h"

/**
 * print_diagonal - print diagonal
 * @n: number of characters to print
 */

void print_diagonal(int n)
{
	int i, j;

	if (!(n <= 0))
	{
		_putchar('\\');
		_putchar('\n');
		for (i = 1; i < n; i++)
		{
			for (j = 1; j <= i; j++)
			{

				_putchar(' ');
				if (j == i)
				{
					_putchar('\\');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
