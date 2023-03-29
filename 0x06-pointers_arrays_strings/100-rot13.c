#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 cipher
 * @str: Pointer to the input string to be encoded
 * Return: Pointer to the encoded string
 */

char *rot13(char *str)
{

	int i = 0;

	char firstset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char secondset[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (str[i] != '\0')
	{
		int j;

		for (j = 0; j <= 52; j++)
		{
			if (str[i] == firstset[j])
			{
				str[i] = secondset[j];
				break;
			}
		}

		i++;
	}

	return (str);
}

