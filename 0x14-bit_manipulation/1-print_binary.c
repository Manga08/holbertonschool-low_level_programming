#include "holberton.h"
/**
 * print_binary - check the code for Holberton School students.
 *@head: the variable
 *Return: the counter
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		putchar('0');
		return;
	}
	else if (n == 1)
	{
		putchar ('1');
		return;
	}
	print_binary(n >> 1);
	putchar('0' + (n & 1));
}
