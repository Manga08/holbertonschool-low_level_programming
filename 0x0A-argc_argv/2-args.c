#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *@argc:The integer
 *@argv:The character
 *Return: always 0
 */
int main(int argc, char *argv[])
{
	int c;

	printf("%s\n", argv[0]);
	if (argc > 1)
		for (c = 1; c < argc; c++)
			printf("%s\n", argv[c]);
	return (0);
}
