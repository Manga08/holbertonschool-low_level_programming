#include "holberton.h"
/**
 * _isupper - Entry point
 *
 *@c: print the value
 *
 *Return: Returns 0 upon successful run.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
