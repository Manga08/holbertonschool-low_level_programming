#include "holberton.h"
/**
 *more_numbers - Entry point
 *
 *
 *Return: (0) Always
 */
void more_numbers(void)
{
	int c, ch;

	for (c = 0; c <= 9; c++)
	{
		for (ch = 0; ch <= 14; ch++)
		{
			if (ch > 9)
			{
				_putchar((ch / 10) + '0');
			}
				_putchar((ch % 10) + '0');
		}
		_putchar ('\n');
	}
}
