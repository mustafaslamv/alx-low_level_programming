#include "main.h"

/**
 * print_alphabet - function definition
 *
 * Return: 0
 */

void print_alphabet(void)(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
