#include "main.h"

/**
 * read_textfile - function reads a text file and prints it to standard output
 * @filename: filename
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int filedp;
	char *buf;

	if (!filename)
	{
		return (0);
	}

	filedp = open(filename, O_RDONLY);

	if (filedp == -1)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);

	if (!buf)
	{
		close(filedp);
		return (0);
	}
	letters = read(filedp, buf, letters);

	if (write(STDOUT_FILENO, buf, letters) != (ssize_t)letters)
	{
		close(filedp);
		free(buf);
		return (0);
	}
	close(filedp);
	free(buf);
	return (letters);
}
