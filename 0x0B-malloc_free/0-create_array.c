#include "holberton.h"
/**
 * create_array - check the code for Holberton School students.
 *@size:The integer
 *@c:The character
 *Return: always 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *ch;

	if (size == 0)
		return (0);
	ch = malloc(size);
	if (str == 0)
		return (0);
	for (x = 0; x < size; x++)
		*(ch + x) = c;
	*(ch + x) = '\0';

	return (ch);
}
