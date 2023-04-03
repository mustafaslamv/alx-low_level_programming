#include "main.h"

/**
 * print_chessboard - function that prints the chessboard
 *
 * @a:  2-darray of characters to print
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	for (i = 0; a[i][j] != '\0'; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
		}
		putchar('\n');
	}
}
