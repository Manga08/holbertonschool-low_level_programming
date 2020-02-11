#include "holberton.h"
/**
 *main - Entry point
 *
 *
 *Return: Returns 0 upon successful run.
 */
int print_last_digit(int n)
{
	int c = n % 10;

	if (n < 0)
		c = c * -1;
	_putchar(c + '0');
	return (c);
}
