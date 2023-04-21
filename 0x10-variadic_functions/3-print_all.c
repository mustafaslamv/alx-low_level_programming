#include "variadic_functions.h"

/**
 * print_char - print float from var args
 *
 * @args: args to print from
 *
 * Return: void
 */
void print_char(va_list args)
{
	printf("%c", (char)va_arg(args, int));
}

/**
 * print_int - print int from var args
 *
 * @args: args to print from
 *
 * Return: void
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - print float from var args
 *
 * @args: args to print from
 *
 * Return: void
 */
void print_float(va_list args)
{
	printf("%f", (float)va_arg(args, double));
}

/**
 * print_str - print str from var args
 *
 * @args: args to print from
 *
 * Return: void
 */
void print_str(va_list args)
{
	char *s;

	s = va_arg(args, char *);
	if (s == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s", s);
	}
}

/**
 * print_all -  prints anything.
 * @format: list of types of arguments passed to the function
 */
void print_all(const char *const format, ...)
{
	int i, j;

	op_t ops[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_str},
	};

	int num_ops = sizeof(ops) / sizeof(op_t);
	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		for (j = 0; j < num_ops; j++)
		{
			if (format[i] == ops[j].type)
			{
				ops[j].print_fn(args);
				if (format[i + 1] != '\0')
				{
					printf(", ");
				}
				break;
			}
		}
	}

	printf("\n");
	va_end(args);
}
