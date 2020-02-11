#include "holberton.h"
/**
 *print_alphabet_x10 - Entry point
 *
 *
 *Return: (0) Always
 */
void print_alphabet_x10(void)
{
	int c, ch;

	for (c = 0; c <= 9; c++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar ('\n');
	}
}
