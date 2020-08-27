#include "search_algos.h"
/**
 * linear_search - Searches for a value in an array using the Linear search.
 * @array: Pointer to the first element of the array.
 * @size: Is the number of elements in array.
 * @value: Is the value to search for.
 * Return: Return -1.
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int ct;

	if (!array)
		return (-1);

	for (ct = 0; ct < size; ct++)
	{
		printf("Value checked array[%d] = [%d]\n", ct, array[ct]);
		if (array[ct] == value)
			return (ct);
	}
	return (-1);
}
