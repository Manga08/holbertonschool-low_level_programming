#include "holberton.h"
/**
 * check - check the code for Holberton School students.
 *@n:The letter
 *@c:The counter
 *Return: always 0
 */
int check(int c, int n)
{
	if (n == c)
		return (1);
	else if (n >= c)
		return (0);
	else if (n % c == 0)
		return (0);
	return (check(c + 1, n));
}
/**
 * is_prime_number - check the code for Holberton School students.
 *@n: The check
 *Return: the check
 */
int is_prime_number(int n)
{
	return (check(1, n));
}
