#include "3-calc.h"
#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code for Holberton School students.
 *@argc: another variable
 *@argv: the function
 *Return: dest
 */
int main(int argc, char *argv[])
{
	int n1 /*= atoi(argv[1])*/, n2 /*= atoi(argv[3])*/, respuesta;
	char operator, *signo;
	int (*p)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operator = argv[2][0];
	if ((operator != '+' && operator != '-'
	     && operator != '*' && operator != '/') || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	if ((operator == '/' || operator == '%')&& n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	signo = argv[2];
	p = get_op_func(signo);
	respuesta = (*p)(n1, n2);

	printf("%d\n", respuesta);
	return (0);
}
