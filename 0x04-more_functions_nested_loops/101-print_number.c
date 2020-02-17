#include "holberton.h"
/**
 *print_number - Entry point
 *@n: give me teh number
 *
 *Return: (0) Always
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
	_putchar('0' + c % 10);
}
