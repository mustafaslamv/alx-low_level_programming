#include "main.h"

/**
 * get_endianness - function that checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int test = 0x01234567;
	char *s = (char *)&test;

	return ((s[0] == 0x67) ? 1 : 0);
}
