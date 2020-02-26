#include "holberton.h"
/**
 * _strlen_recursion - check the code for Holberton School students.
 *@s:The letter
 *Return: always 0
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * get_the_pal - check the code for Holberton School students.
 *@s:The letter
 *@l:The counter
 *Return: always 0
 */
int get_the_pal(char *s, int l)
{
	if (*s != *(s + l - 1))
		return (0);
	else if (*s == '\0')
		return (1);
	return (get_the_pal(s + 1, l - 2));
}
/**
 * is_palindrome - check the code for Holberton School students.
 *@s:The letter
 *Return: always 0
 */
int is_palindrome(char *s)
{
	int l;

	l = _strlen_recursion(s);
	if (l <= 1)
		return (1);
	return (get_the_pal(s, l));
}
