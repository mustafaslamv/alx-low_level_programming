#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	int i, j,k;

	for (i = 48; i <= 57; i++)
	{
		for (j = i; j <= 57; j++)
		{
			for (k = j; k <= 57; k++)
			{
				if (i != j && j != k && i != k)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i + j != 168)
				{
					putchar(',');
					putchar(' ');
				}
			}
			}
		}

	}
	putchar('\n');
	return (0);
}
