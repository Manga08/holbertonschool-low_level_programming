#include "holberton.h"
/**
 * cap_string - check the code for Holberton School students.
 *@n: the variable
 *Return: always 0
 */
char *cap_string(char *n)
{
	int c = 0;

	if (s[c] >= 'a' && s[c] <= 'z')
	{
		s[c] -= 32;
	}
	for (c = 0; n[c] != '\0'; c++)
	{
			if (n[c - 1] == '\n' ||
			   n[c - 1] == '\t' ||
			   n[c - 1] == ' ' ||
			   n[c - 1] == ',' ||
			   n[c - 1] == ';' ||
			   n[c - 1] == '.' ||
			   n[c - 1] == '\"' ||
			   n[c - 1] == '(' ||
			   n[c - 1] == ')' ||
			   n[c - 1] == '{' ||
			   n[c - 1] == '}' ||
			   n[c - 1] == '!' ||
			   n[c - 1] == '?' ||
			   n[c - 1] == '\0')
			{
				n[c] -= 32;
			}
		}
	}
	return (n);
}
