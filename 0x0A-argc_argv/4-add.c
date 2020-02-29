#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - check the code for Holberton School students.
 *@argc:The integer
 *@argv:The character
 *Return: always 0
 */
int main(int argc, char *argv[])
{
	int c, ch, r = 0;

	if (argc > 0)
	{
		for (c = 1; c < argc; c++)
		{
			for (ch = 0; argv[c][ch] != '\0'; ch++)
			{
				if (!(isdigit(argv[c][ch])))
				{
					printf("Error\n");
					return (1);
				}
			}
			r += atoi(argv[c]);
		}
		printf("%d\n", r);
	}
	else
		printf("0\n");
	return (0);
}
