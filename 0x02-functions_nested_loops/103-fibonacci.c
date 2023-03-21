#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{

	int i;
	unsigned long first = 0, second = 1, sum;
	float totalsum;

	while (1)
	{
		sum = first + second;

		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
		{
			totalsum += sum;
		}

		first = second;
		second = sum;

	}

	printf("%.0f\n", totalsum);
	return (0);
}
