#include "main.h"
#include <stdlib.h>

/**
 * my_strlen - function returns length of string
 * @str: string
 * Return: length
 */
int my_strlen(char *str)
{
	int length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}
	return (length);
}

/**
 * argstostr - function concats all argv elements
 * @ac: argc
 * @av: argv
 * Return: pointer to string in an allocated memory
 */
char *argstostr(int ac, char **av)
{
	int length = 0, pos = 0, i, j, arg_len;
	char *string = NULL;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		length += my_strlen(av[i]);
	}
	string = malloc(sizeof(char) * (length + ac) + 1);

	if (string == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		arg_len = my_strlen(av[i]);

		for (j = 0; j < arg_len; j++)
		{
			string[pos] = av[i][j];
			pos++;
		}
		string[pos] = '\n';
		pos++;
	}
	string[pos] = '\0';

	return (string);
}
