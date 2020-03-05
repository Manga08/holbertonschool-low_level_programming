#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - check the code for Holberton School students.
 *@min: the variable
 *@max: another variable
 *Return: dest
 */
int *array_range(int min, int max)
{
	int counter = 0;
	int *c;

	if (min > max)
		return (NULL);
	c = malloc(sizeof(int) * (max - min + 1));
	if (c == NULL)
		return (NULL);
	for (counter = 0; min <= max; min++, counter++)
		*(c + counter) = min;
	return (c);
}
