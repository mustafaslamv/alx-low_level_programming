#include "main.h"


/**
 * isseperator - check if character is a seperator
 * @c: character
 * Return: 1 if true, 0 if false
*/

int isseperator(char c)
{
	int i;
	char delimiter[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
	{
		if (c == delimiter[i])
		{
			return (1);
		}
	}
	return (0);
}

/**
 * cap_string - capitalizes all words of a string
 * @str: input string
 * Return: string with capitalized words
*/

char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i == 0 || isseperator(str[i - 1]))
		{
			if (str[i] >= 97 && str[i] <= 122)
			{
				str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}
