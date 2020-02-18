#include "holberton.h"
/**
 * puts_half - check the code for Holberton School students.
 *@str: the variable
 *
 */
void puts_half(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
	{
	}
	c = c + 1;
	for (c = c / 2; str[c] != '\0'; c++)
	{
		_putchar(str[c]);
	}
	_putchar(10);
}
