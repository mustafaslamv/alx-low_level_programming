#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 48; i <= 102; i++)
	{
		if (i == 58)
		{
			i += 39;
		}
		putchar(i);
	}

	putchar('\n');
	return (0);
}
