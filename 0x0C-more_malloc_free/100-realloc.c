#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - check the code for Holberton School students.
 *@ptr: the variable
 *@old_size: another variable
 *@new_size: the parameter
 *Return: dest
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size > old_size)
	{
		free(ptr);
		ptr = malloc(new_size);
		return (ptr);
	}
	else
	{
		if (new_size == old_size)
			return (ptr);
		if (ptr == NULL)
		{
			ptr = malloc(new_size);
			return (ptr);
		}
		if (new_size == 0 && ptr != NULL)
		{
			free(ptr);
			return (NULL);
		}
	}
	return (ptr);
}
