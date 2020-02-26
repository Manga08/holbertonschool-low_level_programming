#include "holberton.h"
/**
 * check - check the code for Holberton School students.
 *@c:The letter
 *@b:The counter
 *Return: always 0
 */
int check(int c, int b)
{
	if (c * c == b)
		return (c);
	if (c * c > b)
		return (-1);
	return (check(c + 1, b));
}
/**
 * _sqrt_recursion - check the code for Holberton School students.
 *@n: The check
 *Return: the check
 */
int _sqrt_recursion(int n)
{
return (check(1, n));
}
