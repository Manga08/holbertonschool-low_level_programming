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

	if (n > 0 && n < 15)
	{
		for (c = 0; c <= n; c++)
		{
			_putchar('0');
			for (ch = 1; ch <= n; ch++)
			{
				k = c * ch;
				if (k <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(k + '0');
				}
				else if (k > 9 && k <= 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(k / 10 + '0');
					_putchar(k % 10 + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(k / 100 + '0');
					_putchar(k / 10 % 10 + '0');
					_putchar(k % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
