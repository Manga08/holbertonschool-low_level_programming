#include "holberton.h"
/**
 * get_endianness - check the code for Holberton School students.
 *Return: the counter
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return ((int)*c);
}
