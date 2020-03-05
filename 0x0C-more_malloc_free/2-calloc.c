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
	unsigned int *c = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);
	c = malloc(sizeof(unsigned int) * (nmemb * size));
	return (c);
}
