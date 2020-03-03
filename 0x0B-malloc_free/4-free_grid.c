#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - check the code for Holberton School students.
 *@grid: the variable
 *@height: another variable
 *Return: dest
 */
void free_grid(int **grid, int height)
{
	int c;

	for (c = 0; c < height; c++)
	{
		free(*(grid + c));
	}
	free(grid);
}
