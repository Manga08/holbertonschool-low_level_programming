#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - check the code for Holberton School students.
 *@size: the variable
 *@array: another variable
 *@action: the function
 *Return: dest
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
