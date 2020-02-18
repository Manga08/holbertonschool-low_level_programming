#include "holberton.h"
#include <stdio.h>
/**
 * print_array - check the code for Holberton School students.
 *@a: the variable
 *@n: another variable
 */
void print_array(int *a, int n)
{
	int c = 0;

	for (c = 0; c < n; c++)
	{
		printf("%d", a[c]);
		if (c < n - 1)
			printf(", ");
	}
	printf("\n");
}
