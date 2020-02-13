#include "holberton.h"
/**
 * _isdigit - Entry point
 *
 *@c: print the value
 *
 *Return: Returns 0 upon successful run.
 */
int _isdigit(int c);
{
	if (c <= '0' && c >= '9')
		return (1);
	return (0);
}
