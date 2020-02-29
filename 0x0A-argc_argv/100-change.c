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
	int c = 0, ch = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	c = atoi(argv[1]);
	while (c > 0)
	{
		if (c - 25 >= 0)
			c = c - 25;
		else if (c - 10 >= 0)
			c = c - 10;
		else if (c - 5 >= 0)
			c = c - 5;
		else if (c - 2 >= 0)
			c = c - 2;
		else if (c - 1 == 0)
			c = c - 1;
		ch++;
	}
	printf("%d\n", ch);
	return (0);
}
