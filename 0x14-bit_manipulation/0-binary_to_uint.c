#include "holberton.h"
/**
 * binary_to_uint - check the code for Holberton School students.
 *@b: the variable
 *Return: the counter
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int data = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		data = data << 1;
		if (*b != '1' && *b != '0')
			return (0);
		else if (*b == '1')
			data = data | 1;
		b++;
	}
	return (data);
}
