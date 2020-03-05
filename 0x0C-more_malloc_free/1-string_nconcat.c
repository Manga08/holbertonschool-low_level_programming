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
	unsigned int c1 = 0, c2 = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + c1) != '\0')
		c1++;
	if (c2 < n)
		while (*(s2 + c2))
			c2++;
	while (s2[c2] != '\0')
		c2++;
	concat = malloc(c1 + c2 + 1);

	if (concat == NULL)
		return (NULL);

	for (c1 = 0; s1[c1]; c1++)
		*(concat + c1) = *(s1 + c1);
	for (c2 = 0; c2 < n; c1++, c2++)
		*(concat + c1) = *(s2 + c2);
	*(concat + c1) = '\0';
	return (concat);
}
