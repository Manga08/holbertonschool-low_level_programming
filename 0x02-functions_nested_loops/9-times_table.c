#include "holberton.h"
/**
 *times_table - Entry point
 *
 *
 *Return: Returns 0 upon successful run.
 */
void times_table(void)
{
	int c, ch, k;

	for (c = 0; c <= 9; c++)
	{
		for (ch = 0; ch <= 9; ch++)
		{
			k = c * ch;
			if (ch == 0)
			{
				_putchar(k + '0');
			}
			else if (k <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
			else if (k >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
