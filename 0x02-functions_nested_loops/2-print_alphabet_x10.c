#include "holberton.h"
/**
 *main - Entry point
 *
 *
 *Return: Returns 0 upon successful run.
 */
void print_alphabet_x10(void)
{
        int c, ch;

	for (c = 'a'; c <= 'z'; c++)
		for(ch = '0'; ch <= '9'; ch++)
		{
			_putchar(c);
			_putchar('\n');
		}
}
