#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int cho;
	int ch;
	int c;

	for (cho = 0; cho <= 9; cho++)
	{
		for (ch = cho + 1; ch <= 9; ch++)
		{
			for (c = ch + 1; c <= 9; c++)
			putchar(cho + '0');
			putchar(ch + '0');
			putchar(c + '0');
			if (cho < 7)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar(10);
	return (0);
}
