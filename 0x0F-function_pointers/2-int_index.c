#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - check the code for Holberton School students.
 *@array: the variable
 *@size: another variable
 *@cmp: the function
 *Return: dest
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]) != 0)
			return (i);
	return (-1);
}
