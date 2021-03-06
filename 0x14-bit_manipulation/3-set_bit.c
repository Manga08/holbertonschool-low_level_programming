#include "holberton.h"
/**
 * set_bit - check the code for Holberton School students.
 *@n: the variable
 *@index: the index
 *Return: the counter
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < 63)
	{
		*n = *n | (1 << index);
		return (1);
	}
	return (-1);
}
