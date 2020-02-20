#include "holberton.h"
/**
 * reverse_array - check the code for Holberton School students.
 *@a: the variable
 *@n: another variable
 *Return: dest
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int f = 0;

	n = n - 1;
	for (i = 0 ; i <= n; i++)
	{
		f = a[i];
		a[i] = a[n];
		a[n] = f;
		n--;
	}
}
