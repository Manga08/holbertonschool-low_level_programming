#include "holberton.h"
/**
 *main - Entry point
 *
 *
 *Return: Returns 0 upon successful run.
 */
int _abs(int n)
{
	if (n <= 0)
		return (n - (n * 2));
	else
		return (n);
}
