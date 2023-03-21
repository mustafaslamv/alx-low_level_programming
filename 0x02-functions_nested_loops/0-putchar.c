#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	char *string = "_putchar";

	while (*string)
	{
		_putchar(*string);
		*string++;
	}
	_putchar('\n');
	return (0);
}
