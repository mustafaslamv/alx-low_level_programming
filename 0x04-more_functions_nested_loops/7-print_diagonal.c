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
		putchar('\\');
		putchar('\n');
		for (i = 1; i < n; i++)
		{
			for (j = 1; j <= i; j++)
			{

				putchar(' ');
				if (j == i)
				{
					putchar('\\');
				}
			}
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
