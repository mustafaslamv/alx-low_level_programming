#include "main.h"

/**
 * _islower - function definition
 * @c: character ascii code
 */

void _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
}
