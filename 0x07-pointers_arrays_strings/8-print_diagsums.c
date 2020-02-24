#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - check the code for Holberton School students.
 *@a: memory area
 *@size: another memory area
 *Return: always 0
 */
void print_diagsums(int *a, int size)
{
	int c, ch, sum1 = 0, sum2 = 0, counter = 0;

	for (c = 0; c < size; c++)
	{
		for (ch = 0; ch < size; ch++)
		{
			if (c + ch == size - 1)
			sum2 = sum2 + a[counter];
			if (c == ch)
			sum1 = sum1 + a[counter];
		counter++;
		}
	}
	printf("%d,", sum1);
	printf(" %d", sum2);
	putchar ('\n');
}
