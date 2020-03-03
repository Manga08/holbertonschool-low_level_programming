#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - check the code for Holberton School students.
 *@str:The integer
 *Return: always 0
 */
char *_strdup(char *str)
{
	int c, ch;
	char *s;

	if (str == NULL)
		return (NULL);

	for (c = 0; *(str + c) != '\0'; c++)
	{
	}
	s = malloc(c + 1);

	if (s == 0)
		return (0);

	for (ch = 0; ch < c; ch++)
		*(s + ch) = *(str + ch);
	return (s);
}
