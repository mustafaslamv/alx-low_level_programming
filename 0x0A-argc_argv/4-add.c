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
	int i, result = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];

		int j = 0;

		while (arg[j] != '\0')
		{
			if (!(arg[j] >= 48 && arg[j] <= 57))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}

		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);

}
