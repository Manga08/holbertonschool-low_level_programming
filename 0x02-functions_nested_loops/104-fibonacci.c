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
	int ch = 1, k = 2, r = 0;

	printf("1, 2");
	for (c = 1; c <= 96; c++)
	{
		r = ch + k;
		ch = k;
		k = r;
		printf(", %.0f", r);
	}
	putchar(10);
	return (0);
}
