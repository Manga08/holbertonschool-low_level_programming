#include "holberton.h"
/**
 * _puts_recursion - check the code for Holberton School students.
 *@s:The letter
 *Return: always 0
 */
void _puts_recursion(char *s)
{
	if(*s == '\0')
		_putchar ('\n');
		else if (*s != '\0')
		{
			_putchar(*s);
			s++;
			_puts_recursion (s);
		}
}
