#include "holberton.h"
/**
 *print_sign - Entry point
 *@n: tell me the number
 *
 *Return: Returns 0 upon successful run.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
