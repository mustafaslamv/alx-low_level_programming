#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: filename
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int filedp;

	if (!filename)
	{
		return (-1);
	}

	filedp = open(filename, O_RDWR | O_APPEND);

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
