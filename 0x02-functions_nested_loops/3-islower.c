#include "main.h"

/**
 * _islower - function definition
 * @c: character ascii code
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
