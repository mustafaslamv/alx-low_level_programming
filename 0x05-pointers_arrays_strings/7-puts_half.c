#include "main.h"

/**
 * puts_half - function to print half string
 * @str: input string
 */

void puts_half(char *str)
{

	int n;
	int length = 0;

	while (*s != 0)
	{
		length++;
		s++;
	}

	for (length /= 2; str[length] != '\0'; length++)
	{
		_putchar(str[length]);
	}
	_putchar('\n');
}

