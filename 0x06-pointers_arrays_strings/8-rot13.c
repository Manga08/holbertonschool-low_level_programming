#include "holberton.h"
/**
 * rot13 - check the code for Holberton School students.
 *@n: the variable
 *Return: n variable
 */
char *rot13(char *n)
{
	int c, ch;
	char alp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (c = 0; n[c] != '\0'; c++)
	{
		for (ch = 0; alp[ch] != '\0'; ch++)
		{
			if (n[c] == alp[ch])
				n[c] = rot[ch];
		}
	}

	return (n);
}
