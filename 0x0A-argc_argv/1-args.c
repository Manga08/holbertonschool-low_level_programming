#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *@argc:The letter
 *@argv:The character
 *Return: always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int c;

	for (c = 0; c < argc; c++)
		if (c + 1 == argc)
			printf("%i\n", c);
	return (0);
}
