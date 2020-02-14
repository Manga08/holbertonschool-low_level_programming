#include "holberton.h"
/**
 *print_triangle - Entry point
 *@size: give me the size
 *
 *Return: (0) Always
 */
void print_triangle(int size)
{
	int c = 1, x = 1, y = 1;

	if (size <= 0)
		_putchar('\n');
	while (y <= size)
	{
		c = 1;
		x = 1;
		while (c <= (size - y))
		{
			_putchar(' ');
			c++;
		}
		while (x <= y)
		{
			_putchar('#');
			x++;
		}
		_putchar('\n');
		y++;
	}
}
