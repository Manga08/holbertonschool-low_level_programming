#include "holberton.h"
/**
 * print_rev - check the code for Holberton School students.
 *@s: the variable
 *
 */
void rev_string(char *s)
{
	int c;
        int i = 0;
        int f = 0;
        for (c = 0; *(s + c) != '\0' ; c++)
        {
        }
        c = c - 1;

        for (i = 0 ; i  <= c; i++)
        {
                f = s[i];
                s[i] = s[c];
                s[c] = f;
                c--;
        }
}
