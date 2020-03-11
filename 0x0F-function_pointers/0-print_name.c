#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - check the code for Holberton School students.
 *@name: the variable
 *@f: another variable
 *Return: dest
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
