#include "holberton.h"
/**
 * cap_string - check the code for Holberton School students.
 *@n: the variable
 *Return: always 0
 */
char *cap_string(char *n)
{
	int c = 0;

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
			{
				n[c] -= 32;
			}
		}
		return (n);
	}
}
