#include "main.h"

/**
 * open_file - helper function
 * @filename: passed file name to open
 * @flags: file flags
 * @mode: file mode
 * Return: fd
 */
int open_file(char *filename, int flags, mode_t mode)
{
	int fd = open(filename, flags, mode);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", filename);
		exit(99);
	}
	return (fd);
}

/**
 * read_write_data - helper function
 * @fd_from: file_from descriptor
 * @fd_to: file_to descriptor
 */
void read_write_data(int fd_from, int fd_to)
{
	char buf[1024];
	ssize_t nread, nwritten;

	while ((nread = read(fd_from, buf, sizeof(buf))) > 0)
	{
		nwritten = write(fd_to, buf, nread);
		if (nwritten == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file\n");
			exit(99);
		}
	}
	if (nread == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file\n");
		exit(98);
	}
}

/**
 * close_file - helper function to close file
 * @fd: file descriptor
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - entry point
 * @argc: arguments number
 * @argv: list of passed arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	char *file_from, *file_to;
	int fd_from, fd_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];

	fd_from = open_file(file_from, O_RDONLY, 0);
	fd_to = open_file(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	read_write_data(fd_from, fd_to);

	close_file(fd_from);
	close_file(fd_to);

	return (0);
}
