#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{

	int i;
	unsigned long first = 0, second = 1, sum, totalsum;

	for (i = 0; i < 50; i++)
	{
		sum = first + second;
		first = second;
		second = sum;

		if (sum % 2 == 0)
		{
			totalsum += sum;
		}
		printf("%lu\n", totalsum);

	}
	return (0);
}
