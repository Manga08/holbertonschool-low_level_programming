#include "holberton.h"
/**
 * read_textfile - check the code for Holberton School students.
 *@filename: the variable
 *@letters: the letters
 *Return: the counter
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd;
	int fd_read, fd_write, fd_close;

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (-1);
		free(buffer);
	}
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	fd_read = read(fd, buffer, letters);
	if (fd_read == -1)
		return (0);
	fd_write = write(STDOUT_FILENO, buffer, letters);
	if (fd_write == -1)
		return (0);
	fd_close = close(fd);
	if (fd_close == -1)
		return (0);
	free(buffer);
	return (fd_read);
}
