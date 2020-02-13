#include "holberton.h"
/**
 *print_square - Entry point
 *@size: give me the size
 *
 *Return: (0) Always
 */
void print_square(int size)
{
	int c = 0;
	int ch;

	while (c < size)
	{
		ch = 0;
		while (ch < size)
		{
			_putchar('#');
			ch++;
		}
		_putchar('\n');
		c++;
	}
	if (size <= 0)
		_putchar('\n');
}
