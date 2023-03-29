#include "main.h"

/**
 * string_toupper - change lowercase to uppercase characters
 * @str: input string
 * Return: uppercase string
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{

		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}

		i++;
	}
	return (str);
}
