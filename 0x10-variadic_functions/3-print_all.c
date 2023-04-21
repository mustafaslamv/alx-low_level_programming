#include "variadic_functions.h"

/**
 * print_char - prints character
 * @separator: the string separator
 * @args: argument pointer
 */
void print_char(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}

/**
 * print_int - prints integer
 * @separator: the string separator
 * @args: argument pointer
 */
void print_int(char *separator, va_list args)
{
	printf("%s%d", separator, va_arg(args, int));
}

/**
 * print_float - prints float
 * @separator: the string separator
 * @args: argument pointer
 */
void print_float(char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
}

/**
 * print_str - prints string
 * @separator: the string separator
 * @args: argument pointer
 */
void print_str(char *separator, va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		printf("%s(nil)", separator);
	}
	else
	{
		printf("%s%s", separator, str);
	}
}

/**
 * print_all -  prints anything.
 * @format: list of types of arguments passed to the function
 */
void print_all(const char *const format, ...)
{
	int i = 0, j;
	char *separator = "";
	va_list ap;

	token_t tokens[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
		{NULL, NULL}};

	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;
		while (tokens[j].token)
		{
			if (format[i] == tokens[j].token[0])
			{
				tokens[j].f(separator, ap);
				separator = ", ";
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(ap);
}
