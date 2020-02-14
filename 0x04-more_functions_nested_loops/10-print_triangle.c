#include "holberton.h"
/**
 *print_square - Entry point
 *@size: give me the size
 *
 *Return: (0) Always
 */
void print_triangle(int size)
{
	int c, x, y;

	while (y <= size)
	{
		c = 1;
		x = 1;
		while (ch <= (size - y))
		{
			_putchar(' ');
			c++;
		}
		while(x <= y)
		{
		_putchar('#');
		y++;
		}
		_putchar('\n');
			x++;
	}
	if (size <= 0)
		_putchar('\n');
}
