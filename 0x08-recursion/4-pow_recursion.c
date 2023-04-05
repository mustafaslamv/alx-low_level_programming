#include "main.h"

/**
 * _pow_recursion - recursive power function
 *
 * @x: base number
 * @y: power raised
 * Return: (y < 0) >> -1 || (y == 0) >> 1 || x * _pow_recursion(x, y - 1)
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
