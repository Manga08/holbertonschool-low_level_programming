#include <stdio.h>
#include "holberton.h"
/**
 *main - Entry point
 *
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
		for (c = n; c < 99; i++)
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
