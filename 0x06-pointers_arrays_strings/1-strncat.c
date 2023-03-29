#include "main.h"

/**
 * _strncat - function that cat two strings but only n number of char from src
 * @dest: first string
 * @src: second string
 * @n: number of characters
 * Return: pointer to dest string
 */


char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	return (dest);
}
