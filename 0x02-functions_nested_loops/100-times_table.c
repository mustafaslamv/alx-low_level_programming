#include "main.h"
#include <stdio.h>

/**
 * print_times_table - function definition
 * @n: times table to this number
 */

void print_times_table(int n)
{
	int i, j;

	if (!(n > 15 || n < 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (j == n)
				{
					if ((i * j) > 9 && (i * j) < 100)
					{printf(",  %d", (i * j)); }
					else if ((i * j) >= 100)
					{printf(", %d", (i * j)); }
					else
					{printf(",   %d", (i * j)); }
				}
				else if (j == 0)
				{printf("%d", (i * j)); }
				else
				{
					if ((i * j) > 9 && (i * j) < 100)
					{printf(",  %d", (i * j)); }
					else if ((i * j) >= 100)
					{printf(", %d", (i * j)); }
					else
					{printf(",   %d", (i * j)); }
				}
			} printf("\n");
		}
	}
}
