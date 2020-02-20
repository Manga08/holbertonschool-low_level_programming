#include "holberton.h"
/**
 * rev_string - check the code for Holberton School students.
 *@s: the variable
 *Return: always 0
 */
char *cap_string(char *n)
{
	for(c = 0; n[c] != '\n'; c++)
	{
		if (n[c] >= 'a' && n[c] <= 'z')
		{
			if((n - 1) == '\n' ||
			   (n - 1) == '\t' ||
			   (n - 1) == ' ' ||
			   (n - 1) == ',' ||
			   (n - 1) == ';' ||
			   (n - 1) == '.' ||
			   (n - 1) == '!' ||
			   (n - 1) == '?' ||
			   (n - 1) == '\"' ||
			   (n - 1) == '\(' ||
			   (n - 1) == '\)' ||
			   (n - 1) == '\{' ||
			   (n - 1) == '\}')
			   n[c] -= 32;
			   }
		}
	return (n);
	}
