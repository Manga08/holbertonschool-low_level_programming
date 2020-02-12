#include <stdio.h>
#include "holberton.h"
/**
 *main - entry point
 *
 *Return: Returns 0 upon successful run.
 */
int main(void)
{
	int c;
	long a = 1, b = 2, d = 0;

	printf("1, 2");
	for (c = 1; c <= 48; c++)
	{
		d = a + b;
		a = b;
		b = d;
		printf(", %ld", d);
	}
	putchar(10);
	return (0);
}
