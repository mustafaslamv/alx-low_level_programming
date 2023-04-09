#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int number, count = 0;
	int i, coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	number = atoi(argv[1]);

	if (number < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		count += number / coins[i];
		number %= coins[i];
	}

	printf("%d\n", count);
	return (0);
}
