#include "holberton.h"
/**
 *main - Entry point
 *
 *
 *Return: Returns 0 upon successful run.
 */
void jack_bauer(void)
{
	int c, ch;

	for (c = 0; c < 24; c++)
	{
		for (ch = 0; ch < 60; ch++)
		{
			_putchar(c / 10 + '0');
			_putchar(c % 10 + '0');
			_putchar(':');
			_putchar(ch / 10 + '0');
			_putchar(ch % 10 + '0');
			_putchar('\n');
		}
	}
}
