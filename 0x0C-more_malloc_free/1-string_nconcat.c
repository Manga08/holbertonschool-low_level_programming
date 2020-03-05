#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - check the code for Holberton School students.
 *@s1: the variable
 *@s2: another variable
 *@n: the parameter
 *Return: dest
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int c1, c2, x, y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (c1 = 0 ; s1[c1] != '\0' ; c1++)
	{
	}
	for (c2 = 0 ; s2[c2] != '\0' ; c2++)
	{
	}
	if (n > c2)
		n = c2;

	p = malloc(sizeof(char) * (c1 + n + 1));
	if (p == NULL)
		return (NULL);
	for (x = 0 ; s1[x] != '\0' ; x++)
	{
		p[x] = s1[x];
	}
	for (y = 0 ; y < n ; y++)
	{
		p[x] = s2[y];
		x++;
	}
	p[x] = '\0';
	return (p);
}
