#include "3-calc.h"

/**
 * main - Entry point
 * @argc: arguments counter
 * @argv: arguments values
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	op_func = get_op_func(argv[2]);

	if (op_func == NULL)
	{
		printf("Error\n");
		exit (98);
	}

	if (!num2 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit (100);
	}

	printf("%d\n", op_func(num1, num2));

	return (0);
}
