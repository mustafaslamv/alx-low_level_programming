#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 * @separator: string to be printed between strings
 * @n: number of passed strings
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *x;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, char *);
		if (x == NULL)
		{
			printf("(nil)");
		}
		printf("%s", x);
		if (i != (n - 1))
		{
			if (separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
}
