#include "holberton.h"
/**
 *print_alphabet - Entry point
 *
 *
 *Return: Returns 0 upon successful run.
 */
void print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar(10);
}
