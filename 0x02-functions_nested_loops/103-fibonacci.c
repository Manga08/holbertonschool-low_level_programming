#include <stdio.h>
#include "holberton.h"
/**
 *main - entry point
 *
 *Return: Returns 0 upon successful run.
 */
int main(void)
{
	long int c = 1, ch = 2, sum = 0, r = 2;

	while (sum < 4000000)
	{
		sum = c + ch;
		c = ch;
		ch = sum;
		if (sum % 2 == 0)
		{
			r += sum;
		}
	}
	printf("%li\n", r);
	return (0);
}
