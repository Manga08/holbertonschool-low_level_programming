#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;
	int c;

	for (ch = 0; ch <= 9; ch++)
	{
		for (c = ch + 1; c <= 9; c++)
		{
			putchar(ch + '0');
			putchar(c + '0');
			if (ch < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar(10);
	return (0);
}
