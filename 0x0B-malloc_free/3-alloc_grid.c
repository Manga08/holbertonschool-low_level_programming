#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - check the code for Holberton School students.
 *@width: the variable
 *@height: another variable
 *Return: dest
 */
int **alloc_grid(int width, int height)
{
	int **p, c1, c2, c3;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = malloc(height * sizeof(int *));

	if (p == NULL)
		return (NULL);

	for (c1 = 0; c1 < height; c1++)
	{
		p[c1] = malloc(width * sizeof(int));
		if (p[c1] == NULL)
		{
			for (c3 = 0; c3 <= c1; c3++)
				free(p[c3]);
			free(p);
			return (NULL);
		}
		for (c2 = 0; c2 < width; c2++)
			p[c1][c2] = 0;
	}
	return (p);
}
