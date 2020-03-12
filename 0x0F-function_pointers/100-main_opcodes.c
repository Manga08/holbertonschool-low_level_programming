#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *@argc: the variable
 *@argv: another variable
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int c;
	unsigned char *p = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (c = 0; c < (atoi(argv[1]) - 1); c++, p++)
		printf("%02x ", *p);
	printf("%02x\n", *p);

	return (0);
}
