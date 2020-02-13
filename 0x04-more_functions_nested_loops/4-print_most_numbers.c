#include "holberton.h"
/**
 *print_most_numbers - Entry point
 *
 *
 *Return: Returns 0 upon successful run.
 */
void print_most_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c == '2' || c == '4')
		{
		}
		else
		{
			_putchar (c);
		}
	}
	_putchar (10);
}
