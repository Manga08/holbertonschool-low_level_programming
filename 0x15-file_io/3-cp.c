#include "holberton.h"
/**
 * arg_error - Print error and exit 97
 */
void arg_error(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

/**
 * file_from_error - Print error and exit 98
 * @file: The variable
 */
void file_from_error(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	exit(98);
}

/**
 * file_to_error - Print error and exit 99
 * @file: The variable
 */
void file_to_error(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(99);
}

/**
 * close_error - Print error and exit 100
 * @fd: The variable
 */
void close_error(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}
/**
 * main - check the code for Holberton School students.
 *@argc: the argc
 *@argv: the argv
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, close_status;
	char buf[1024];
	ssize_t size;

	if (argc != 3)
		arg_error();
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		file_from_error(argv[1]);
	fd_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd_to == -1)
		file_to_error(argv[2]);
	while ((size = read(fd_from, buf, 1024)) > 0)
		if (write(fd_to, buf, size) != size)
			file_to_error(argv[2]);

	if (size == -1)
		file_from_error(argv[1]);

	close_status = close(fd_from);
	if (close_status == -1)
		close_error(fd_from);

	close_status = close(fd_to);
	if (close_status == -1)
		close_error(fd_to);

	return (0);
}
