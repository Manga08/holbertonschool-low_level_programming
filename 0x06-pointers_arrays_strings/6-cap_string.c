#include "holberton.h"
/**
 * cap_string - check the code for Holberton School students.
 *@n: the variable
 *Return: always 0
 */
char *cap_string(char *n)
	int c;

for (c = 0; n[c] != '\0'; c++)
{
	if (c == 0)
	{
		if (n[c] >= 'a' && n[c] <= 'z')
		{
			n[c] -= 32;
		}
		else if (n[c - 1] == 32||'\t'||'\n'||','||';'||'.'||'!'||
			 '?'||'"'||'('||')'||'{'||'}')
			n[c] -= 32;
	}
}
return (n);
}
