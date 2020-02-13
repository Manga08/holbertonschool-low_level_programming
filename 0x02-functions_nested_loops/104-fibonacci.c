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
	float ch = 1, k = 2, r = 0;

	printf("1, 2");
	for (c = 1; c <= 97; c++)
	{
		r = ch + k;
		ch = k;
		k = r;
		printf(", %.0f", r);
	}
	putchar(10);
	return (0);
}
