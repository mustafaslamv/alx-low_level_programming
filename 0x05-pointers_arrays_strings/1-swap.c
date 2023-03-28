#include "main.h"

/**
 * swap_int - function to swap 2 varables by their address
 * @a: first variable
 * @b: second variable
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

