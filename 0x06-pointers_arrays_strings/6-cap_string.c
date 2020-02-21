#include "holberton.h"
/**
 * cap_string - check the code for Holberton School students.
 *@n: the variable
 *Return: always 0
 */
char *cap_string(char *n)
{
	int c;

	for (c = 0; n[c] != '\0' ; c++)
	{
		if (n[c - 1] == 0 ||
		    n[c - 1] == 9 ||
		    n[c - 1] == 10 ||
		    n[c - 1] == 32 ||
		    n[c - 1] == '.' ||
		    n[c - 1] == ',' ||
		    n[c - 1] == ';' ||
		    n[c - 1] == '!' ||
		    n[c - 1] == '?' ||
		    n[c - 1] == '"' ||
		    n[c - 1] == '(' ||
		    n[c - 1] == ')' ||
		    n[c - 1] == '{' ||
		    n[c - 1] == '}')
		{
			if (n[c] >= 'a' && n[c] <= 'z')
			{
				n[c] = n[c] - 32;
			}
		}
	}
	return (n);
}
