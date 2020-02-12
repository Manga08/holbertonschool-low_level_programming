#include "holberton.h"
/**
 *print_times_table - Entry point
 *@n: give me the number
 *
 *Return: Returns 0 upon successful run.
 */
void print_times_table(int n)
{
	int c, ch, k;

	for (c = 0; c <= 9; c++)
	{
		for (ch = 0; ch <= 9; ch++)
		{
			k = c * ch;
			if (j != 0)
			{
				_putchar (',');
				_putchar (' ');
				else if (k >= 10 && k < 100)
				{
					_putchar (' ');
					_putchar (k / 10 + '0');
					_putchar (k % 10 + '0');
				}
				else if (k < 10)
				{
					_putchar (' ');
					_putchar (' ');
					_putchar (k + '0');
				}
				else
				{
					_putchar (k / 100 + '0');
					_putchar ((k / 10) % 10 + '0');
					_putchar (k % 10 + '0');
				}
			}
			else
			{
				_putchar (k  + '0');
			}
		}
		_putchar(10);
	}
}
