#include "variadic_functions.h"
/**
 * print_strings - check the code for Holberton School students.
 *@n: the variable
 *@separator: another variable
 *Return: dest
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list data;
	unsigned int c;
	char *string;

	if (separator == NULL)
		return;

	va_start(data, n);

	for (c = 0; c < n; c++)
	{
		string = va_arg(data, char *);
		if (string == NULL)
		{
			printf("(nil)");
			return;
		}
		printf("%s", string);
		if (n == c + 1)
			return;
		printf("%s", separator);
	}
	printf("\n");
	va_end(data);
}
