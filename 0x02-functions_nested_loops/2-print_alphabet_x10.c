#include "holberton.h"
/**
 *print_alphabet_x10 - Entry point
 *
 *
 *Return: Returns 0 upon successful run.
 */
void print_alphabet_x10(void)
{
	int c, ch;

	for (c = 0; c <= 9; c++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(c);
		}
		_putchar ('\n');
	}
}
