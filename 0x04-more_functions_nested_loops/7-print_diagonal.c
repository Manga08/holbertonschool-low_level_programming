#include "holberton.h"
/**
 *print_diagonal - Entry point
 *@n: Give me the number
 *
 *Return: (0) Always
 */
void print_diagonal(int n)
{
	int c = 0;
	int ch;

	while (c < n)
	{
		ch = 0;
		while (ch < c)
		{
			_putchar(' ');
			ch++;
		}
				_putchar('\\');
				_putchar('\n');
				c++;
	}
	if (n <= 0)
		_putchar('\n');
}
