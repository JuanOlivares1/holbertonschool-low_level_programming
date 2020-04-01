#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: filename
 * @letters: chars to print
 *
 * Return: returns the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	int fd;
	ssize_t rd, wr;

	if (!filename)
		return (0);

	buff = malloc(sizeof(char) * letters);
        if (!buff)
                return (0);


	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buff);
		return (0);
	}

	rd = read(fd, buff, letters);
	if (rd == -1)
	{
		free(buff);
		close(fd);
	}
	close(fd);

	wr = write(0, buff, rd);
	if (wr == -1)
	{
		free(buff);
	}

	if (rd != wr)
		return (0);

	free(buff);
	return (wr);
}
