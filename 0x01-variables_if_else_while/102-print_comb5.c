#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a < 100; a++)
	{
		for (b = 0; b < 100; b++)
		{
			if ((a == 0 && b != 0) || (b > a))
			{
				putchar(a / 10 + '0');
				putchar(a % 10 + '0');
				putchar(' ');
				putchar(b / 10 + '0');
				putchar(b % 10 + '0');

				if (a < 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar(10);
	return (0);
}
