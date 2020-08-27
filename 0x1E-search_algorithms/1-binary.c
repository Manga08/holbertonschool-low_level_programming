#include "search_algos.h"
/**
 * binary_search - Searches a value in a sorted array using Binary algorithm.
 * @array: Pointer to the first element of the array.
 * @size: Is the number of elements in array.
 * @value: Is the value to search for.
 * Return: Return -1.
 */
int binary_search(int *array, size_t size, int value)
{
	int ct, temp, start = 0, end = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	while (start <= end)
	{
		printf("Searching in array: ");
		for (ct = start; ct < end; ct++)
		{
			printf("%d, ", *(array + ct));
		}
	    printf("%d\n", *(array + ct));
		temp = (start + end) / 2;
		if (value > *(array + temp))
			start = temp + 1;
		else if (value < *(array + temp))
			end = temp - 1;
		else
			return (temp);
	}
	return (-1);
}
