#include "holberton.h"
/**
 * _strcmp - check the code for Holberton School students.
 *@s1: the variable
 *@s2: another variable
 *Return: dest
 */
int _strcmp(char *s1, char *s2)
{
	int c;

	for (c = 0; s1[c] != '\0' && s2[c] != '\0'; c++)
	{
		if (s1[c] != s2[c])
			return ((int) s1[c] - s2[c]);
	}
	return (0);
}
