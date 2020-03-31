#include "holberton.h"
/**
 * append_text_to_file - check the code for Holberton School students.
 *@filename: the variable
 *@text_content: the content
 *Return: the counter
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fd_write, ct;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	for (ct = 1; text_content[ct]; ct++)
	{
	}
	fd_write = write(fd, text_content, ct);
	close(fd);
	if (fd_write == -1)
		return (-1);
	return (1);
}
