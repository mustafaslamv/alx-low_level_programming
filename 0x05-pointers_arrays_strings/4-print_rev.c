#include "main.h"

/**
 * print_rev - function to print string in reverse order
 * @s: input string
 */

void print_rev(char *s)
{
	int length = 0;
	int i = 0;

	while (*s != 0)
	{
		length++;
		s++;
	}


   while (i <= length)
   {
      _putchar(*s);
      s--;
      i++;
   }
   
	_putchar('\n');

}

