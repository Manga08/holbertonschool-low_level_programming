#include "holberton.h"

/**
 * _puts - check the code for Holberton School students.
 *@str: the variable
 *
 */
void _puts(char *str)
{
	int c;

	for (c = 0; *(str + c) != '\0'; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
