#include "holberton.h"
#include <stdio.h>
/**
 *main - Entry point
 *
 *
 *Return: Returns 0 upon successful run.
 */
int main(void)
{
	int c, ch;

	for (c = 0; c < 1024; c++)
	{
		if ((c % 3 == 0 || c % 5 == 0))
		{
			ch += c;
		}
	}
	printf("%d\n", ch);

	return (0);
}
