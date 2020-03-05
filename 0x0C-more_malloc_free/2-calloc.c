#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - check the code for Holberton School students.
 *@nmemb: the variable
 *@size: another variable
 *Return: dest
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int c1, c2;
	char *c;

	if (nmemb == 0 || size == 0)
		return (NULL);
	c1 = nmemb * size;
	c = malloc(c1);
	if (c == NULL)
		return (NULL);
	for (c2 = 0; c2 < c1; c2++)
		c[c1] = 0;
	return (c);
}
