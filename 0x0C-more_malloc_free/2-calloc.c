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
	unsigned int c1;
	char *c;

	if (nmemb == 0 || size == 0)
		return (NULL);
	c = malloc(nmemb * sizeof(char));
	if (c == NULL)
		return (NULL);
	for (c1 = 0; c1 < nmemb; c1++)
		c[c1] = 0;
	return (c);
}
