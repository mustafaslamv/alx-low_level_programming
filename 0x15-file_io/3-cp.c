#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <sys/stat.h>

#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
#define MSG_USAGE "Usage: cp file_from file_to\n"
#define MSG_ERR_NOREAD "Error: Can't read from file %s\n"
#define MSG_ERR_NOWRITE "Error: Can't write to %s\n"
#define MSG_ERR_NOCLOSE "Error: Can't close fd %d\n"
#define READ_BUF_SIZE 1024

/**
 * main - program entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char **argv)
{
	int fd_from = 0, fd_to = 0;
	ssize_t bytes_read;
	char buffer[READ_BUF_SIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, MSG_USAGE), exit(97);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, MSG_ERR_NOREAD, argv[1]), exit(98);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, MSG_ERR_NOWRITE, argv[2]), exit(99);

	while ((bytes_read = read(fd_from, buffer, READ_BUF_SIZE)) > 0)
	{
		if (write(fd_to, buffer, bytes_read) != bytes_read)
			dprintf(STDERR_FILENO, MSG_ERR_NOWRITE, argv[2]), exit(99);
	}
	if (bytes_read == -1)
		dprintf(STDERR_FILENO, MSG_ERR_NOREAD, argv[1]), exit(98);

	if (close(fd_from) == -1)
		dprintf(STDERR_FILENO, MSG_ERR_NOCLOSE, fd_from), exit(100);

	if (close(fd_to) == -1)
		dprintf(STDERR_FILENO, MSG_ERR_NOCLOSE, fd_to), exit(100);

	return (0);
}
