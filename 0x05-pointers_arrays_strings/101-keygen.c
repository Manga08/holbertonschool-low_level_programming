#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - check the code for Holberton School students.
 *
 *Return: 0
 */
int main(void)
{
	int c, ch, r;
	char array[50] = "";

	srand(time(NULL));

	r = 0;
	for (c = 0; r < (2772 - 100); c++)
	{
		ch = 33 + rand() % 94;
		array[c] = ch;
		r += array[c];
	}
	array[c] = 2772 - r;
	c++;
	array[c] = '\0';

	printf("%s", array);

	return (0);
}
