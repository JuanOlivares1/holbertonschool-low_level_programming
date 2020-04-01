#include "holberton.h"

/**
 * create_file - function that creates a file.
 * @filename: filename
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t wr;
	int fd, i;

	if (filename == NULL)
		return (-1);

	for (i = 0; text_content && text_content[i]; i++)
		;

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (i)
		wr = write(fd, text_content, i);

	if (wr == -1)
		return (-1);

	close(fd);
	return (1);
}
