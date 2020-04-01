#include "holberton.h"

/**
 * append_text_to_file - function that appends text to a file.
 * @filename: filename
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t wr;
	int fd, i = 0;

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);

	for (i = 0; text_content && text_content[i]; i++)
		;

	if (i > 0)
	{
		wr = write(fd, text_content, i);
		if (wr == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
