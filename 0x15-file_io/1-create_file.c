#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: filename
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int filedp;

	if (!filename)
	{
		return (-1);
	}

	filedp = open(filename, O_WRONLY | O_TRUNC);
	if (filedp == -1)
	{
		filedp = open(filename, O_WRONLY | O_CREAT, 0600);
	}
	if (filedp == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		ssize_t bytes_written = write(filedp, text_content, strlen(text_content));

		if (bytes_written == -1 || (size_t)bytes_written != strlen(text_content))
		{
			close(filedp);
			return (-1);
		}
	}

	close(filedp);
	return (1);
}
