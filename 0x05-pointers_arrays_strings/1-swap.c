#include "holberton.h"
/**
 *swap_int - Entry point
 *
 *@a: give me a value
 *@b: give me another value
 *Return: Returns 0 upon successful run.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
