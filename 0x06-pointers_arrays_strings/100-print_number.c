#include "holberton.h"
/**
 * print_number - check the code for Holberton School students.
 *@n: the variable
 *Return: always 0
 */
void print_number(int n)
{
	unsigned int c;

	if (n < 0)
	{
		_putchar('-');
		c = -n;
	}
	else
		c = n;

	if (c / 10)
		print_number(c / 10);

	_putchar(c % 10 + '0');
}
