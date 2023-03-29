#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: input string
 * Return: string str
 */


char *leet(char *str)
{

	int i = 0;

	char refchars[] = "aAeEoOtTlL";
	char refnumbers[] = "4433007711";

	while (str[i] != '\0')
	{
		int j = 0;

		while (j < 10)
		{

			if (refchars[j] == str[i])
			{
				str[i] = refnumbers[j];
			}
			j++;
		}

		i++;
	}

	return (str);
}
