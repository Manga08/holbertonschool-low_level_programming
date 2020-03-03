#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - check the code for Holberton School students.
 *@s1: the variable
 *@s2: another variable
 *Return: dest
 */
char *str_concat(char *s1, char *s2)
{
	int c1 = 0, c2 = 0, s, p;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + c1) != '\0')
		c1++;
	while (*(s2 + c2) != '\0')
		c2++;

	concat = malloc(c1 + c2 + 1);

	if (concat == 0)
		return (0);

	for (s = 0; s < c1; s++)
		*(concat + s) = *(s1 + s);
	for (s = 0, p = c1; s < c2; p++, s++)
		*(concat + p) = *(s2 + s);
	*(concat + p) = '\0';
	return (concat);
}
