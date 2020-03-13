#include "variadic_functions.h"
/**
 * sum_them_all - check the code for Holberton School students.
 *@n: the variable
 *Return: dest
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int c, sum = 0;
	va_list data;

	if (n == 0)
		return (0);

	va_start(data, n);

	for (c = 0; c < n; c++)
		sum = sum + va_arg(data, unsigned int);
	va_end(data);
	return (sum);
}
