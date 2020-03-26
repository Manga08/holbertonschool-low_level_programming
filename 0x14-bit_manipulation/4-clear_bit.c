#include "holberton.h"
/**
 * clear_bit - check the code for Holberton School students.
 *@n: the variable
 *@index: the index
 *Return: the counter
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < (8 * sizeof(unsigned long int)))
	{
		*n &= ~(1 << index);
		return (1);
	}
	else
		return (-1);
}
