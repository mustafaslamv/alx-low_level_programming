#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		if (i != 58 && i != 48)
		{
			putchar(',');
			putchar(' ');
		}
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
