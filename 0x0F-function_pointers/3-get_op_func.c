#include "calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_op_func - check the code for Holberton School students.
 *@s: the variable
 *Return: dest
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (i < 5)
	{
		if (*s == (*ops[i].op))
			return (*(ops[i]).f);
		i++;
		return (NULL);
	}
}
