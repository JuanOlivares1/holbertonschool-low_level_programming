#include "holberton.h"

void write_file(int fdrd, int fdwr, char *f_from, char *f_to);

/**
 * main - copies a file into another
 * @ac: number of args
 * @av: array of args
 *
 * Return: always 0
 */
int main(int ac, char **av)
{
	char *f_from, *f_to;
	int fdrd, fdwr;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	f_from = av[1];
	f_to = av[2];

	fdrd = open(f_from, O_RDONLY);
	if (fdrd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", f_from);
		exit(98);
	}

	fdwr = open(f_to, O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fdwr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f_to);
		exit(99);
	}

	write_file(fdrd, fdwr, f_from, f_to);

	if (close(fdwr))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdwr);
		exit(100);
	}

	if (close(fdrd))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdrd);
		exit(100);
	}
	exit(EXIT_SUCCESS);
}

/**
 * write_file - function that cp a file.
 * @fdrd: fd for reading
 * @fdwr: fd for writing
 * @f_from: name of file to copy from
 * @f_to: name of file to paste to
 *
 * Return: void
 */
void write_file(int fdrd, int fdwr, char *f_from, char *f_to)
{
	ssize_t wr, rd;
	char buff[1024];

	do {
		rd = read(fdrd, buff, 1024);
		if (rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", f_from);
			exit(98);
		}
		if (rd)
		{
			wr = write(fdwr, buff, rd);
			if (wr != rd)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f_to);
				exit(99);
			}
		}
	} while (rd);
}
