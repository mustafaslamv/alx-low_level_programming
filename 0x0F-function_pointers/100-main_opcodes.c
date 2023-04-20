#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * @argc: arg number
 * @argv: arg values
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int number, i;
	char *p;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	number = atoi(argv[1]);
	p = (int *)main;

	if (number < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < number; i++)
	{
		printf("%02hhx", *(p + i));
		if (i + 1 != number)
			printf(" ");
	}
	printf("\n");

	return (0);
}
