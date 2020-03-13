#include "variadic_functions.h"
/**
 * p_char - Entry point
 * @c: variable
 */
void p_char(va_list c)
{
	printf("%c", va_arg(c, int));
}
/**
 * p_int - Entry point
 * @i: variable
 */
void p_int(va_list i)
{
	printf("%d", va_arg(i, int));
}
/**
 * p_float - Entry point
 * @f: variable
 */
void p_float(va_list f)
{
	printf("%f", va_arg(f, double));
}
/**
 * p_str - Entry point
 * @s: variable
 */
void p_str(va_list s)
{
	char *str;

	str = va_arg(s, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}
/**
 * print_all - check the code for Holberton School students.
 *@format: another variable
 *Return: dest
 */
void print_all(const char * const format, ...)
{
	char *coma = "";
	va_list data;
	unsigned int c1 = 0, c2 = 0;

	pr_t ops[] = {
		{"c", p_char},
		{"i", p_int},
		{"f", p_float},
		{"s", p_str},
		{NULL, NULL}
	};

	va_start(data, format);

	while (format != NULL && format[c1] != '\0')
	{
		c2 = 0;
		while (ops[c2].pr != NULL)
		{
			if (format[c1] == ops[c2].pr[0])
			{
				printf("%s", coma);
				ops[c2].f(data);
				coma = ", ";
			}
			c2++;
		}
		c1++;
	}
	printf("\n");
	va_end(data);
}
