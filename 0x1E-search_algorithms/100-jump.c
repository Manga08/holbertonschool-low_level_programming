#include "search_algos.h"
/**
 * jump_search - Searches a value in array using the Interpolationer algorithm.
 * @array: Pointer to the first element of the array.
 * @size: Is the number of elements in array.
 * @value: Is the value to search for.
 * Return: Return -1.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t prev, next;

	if (!array)
		return (-1);
	printf("Value checked array[0] = [%i]\n", array[0]);
	if (array[0] == value)
		return (0);
	prev = 0;
	next = sqrt(size);
	while ((next < size) & (array[next] < value))
	{
		printf("Value checked array[%li] = [%i]\n", next, array[next]);
		prev = next;
		next += sqrt(size);
		if (prev >= size)
			return (-1);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", prev, next);
	while ((prev < size) & (array[prev] <= value))
	{
		printf("Value checked array[%lu] = [%i]\n", prev, array[prev]);

		if (array[prev] == value)
			return (prev);
		prev++;
	}
	return (-1);
}
