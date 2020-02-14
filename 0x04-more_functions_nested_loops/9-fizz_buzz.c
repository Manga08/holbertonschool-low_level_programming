#include "holberton.h"
/**
 *main - Entry point
 *
 *
 *Return: (0) Always
 */
int main(void)
{
	int c;

	for (c = 1; c <= 100; c++)
	{
		if ((c % 3) == 0 && (c % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((c % 3) == 0)
		{
			printf("Fizz ");
		}
		else if (c == 100)
		{
			printf("Buzz");
		}
		else if ((c % 5) == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", c);
		}
	}
	printf("\n");

	return (0);
}
