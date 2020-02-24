#include "holberton.h"
/**
 * print_chessboard - check the code for Holberton School students.
 *@a: something
 *Return: always 0
 */
void print_chessboard(char (*a)[8])
{
	unsigned int c, ch;

	for (c = 0; c < 8; c++)
	{
		for (ch = 0; ch < 8; ch++)
		{
		_putchar(a[c][ch]);
		}
	}
	putchar('/n');
}
