#include "holberton.h"
/**
 *print_line - Entry point
 *@n: give me the number
 *
 *Return: (0) Always
 */
void print_line(int n)
{
	int c = 0;

	while (n > c)
	{
		_putchar('_');
		c++;
	}
	_putchar('\n');
}
