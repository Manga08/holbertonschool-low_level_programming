#include <stdio.h>
#include "holberton.h"
/**
 *print_to_98 - Entry point
 *@n: tell me the number to print
 *
 *Return: Returns 0 upon successful run.
 */
void print_to_98(int n)
{
	int c;

	if (n > 98)
	{
		for (c = n; c > 97; c--)
		{
			printf("%d", c);
			if (c != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (c = n; c < 99; c++)
		{
			printf("%d", c);
			if (c != 98)
			{
				printf(", ");
			}
		}

	}
	printf("\n");
}
