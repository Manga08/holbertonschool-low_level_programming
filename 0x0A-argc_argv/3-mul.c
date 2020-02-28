#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code for Holberton School students.
 *@argc:The integer
 *@argv:The character
 *Return: always 0
 */
int main(int argc, char *argv[])
{
	int c = 1;

	if (argc == 3)
	{
		c *= atoi(argv[argc - 2]);
		c *= atoi(argv[argc - 1]);
		printf("%d\n", c);
	}
	else
		printf("Error\n");
	return (0);
}
