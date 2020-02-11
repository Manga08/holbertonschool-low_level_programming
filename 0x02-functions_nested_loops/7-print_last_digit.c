#include "holberton.h"
/**
 *print_last_digit - Entry point
 *@n: tell me the number
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
