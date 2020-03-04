#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - check the code for Holberton School students.
 *@s1: the variable
 *@s2: another variable
 *Return: dest
 */
char *argstostr(int ac, char **av)
{
	int c1 = 0, c2 = 0, c3, c4, Long = 0;
	char *s;

	if (ac == 0 || av == '\0')
		return (NULL);

	for (c1 = 0; c1 < ac; c1++)
	{
		c2 = 0;
		while (av[c1][c2] != '\0')
		{
			c2++;
		}
		Long  +=  c2 + 1;
	}
	s = malloc(sizeof(char) * (Long + 1));

	if (s == NULL)
	{
		return (NULL);
	}
	Long = 0;
	for (c3 = 0; c3 < ac; c3++)
	{
		for (c4 = 0; av[c3][c3] != '\0'; c4++)
		{
			*(s + Long) = av[c3][c4];
			Long++;
		}
		*(s + Long) = '\n';
		Long++;
	}

	return (s);
}
