#include "holberton.h"
/**
 * string_toupper - check the code for Holberton School students.
 *@n: the pinter
 *Return: always 0
 */
char *string_toupper(char *n)
{
	int c = 0;

	for(c = 0; n[c]; c++)
	{
		if(n[c]>='a' && n[c]<='z')
		{
			n[c] -= 32;
		}
	}
	return(n);
}
