#include "holberton.h"
/**
 * flip_bits - check the code for Holberton School students.
 *@n: the variable
 *@m: another variable
 *Return: the counter
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int fliping = 0, bit1, bit2;

	while (!(n == 0 && m == 0))
	{
		bit1 = n & 1;
		bit2 = m & 1;
		n = n >> 1;
		m = m >> 1;
		if (bit1 != bit2)
			fliping += 1;
	}
	return (fliping);
}
