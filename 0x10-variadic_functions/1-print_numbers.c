#include "variadic_functions.h"
/**
 * print_numbers - check the code for Holberton School students.
 *@n: the variable
 *@separator: another variable
 *Return: dest
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list data;
	unsigned int c;

	if (separator == NULL)
	{
		return;
	}

	va_start(data, n);

	for (c = 0; c < n; c++)
	{
		printf("%d", va_arg(data, unsigned int));
		if (n == c + 1)
		{
			return;
		}
		printf("%s", separator);
	}
	printf("\n");
	va_end(data);
}
