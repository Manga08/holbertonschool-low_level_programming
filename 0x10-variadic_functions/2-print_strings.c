#include "variadic_functions.h"
/**
 * print_strings - check the code for Holberton School students.
 *@n: the variable
 *@separator: another variable
 *Return: dest
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int c;
	va_list data;

	va_start(data, n);

	for (c = 0; c < n; c++)
	{
		if (data != NULL)
			printf("%s", va_arg(data, char*));
		else
			printf("(nil)");
		if (c != (n - 1))
		{
			if (separator != NULL)
				printf("%s ", separator);
		}
		else
			printf("\n");
	}
	va_end(data);
}
