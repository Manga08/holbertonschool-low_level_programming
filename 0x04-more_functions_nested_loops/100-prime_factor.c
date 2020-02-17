#include "holberton.h"
#include <stdio.h>
/**
 *main - Entry point
 *
 *
 *Return: (0) Always
 */
int main(void)
{
	long c, ch;

	c = 612852475143;

	for (ch = 2; c > ch; ch++)
	{
		while (c % ch == 0)
		{
			c = c / ch;
		}
	}
	printf("%lu", ch);
	putchar('\n');
	return (0);
}
