#include "holberton.h"
/**
 *main - Entry point
 *
 *
 *Return: Returns 0 upon successful run.
 */
void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <.= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
