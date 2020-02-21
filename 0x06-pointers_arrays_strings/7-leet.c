#include "holberton.h"
/**
 * leet - check the code for Holberton School students.
 *@n: the variable
 *Return: always 0
 */
char *leet(char *n)
{
	int c, ch;
	char le[] = "aeotl";
	char num[] = "43071";

	for (c = 0; n[c] != '\0'; c++)
	{
		for (ch = 0; le[ch] != '\0'; ch++)
		{
			if (n[c] == le[ch] || n[c] == le[ch] - 32)
				n[c] = num[ch];
		}
	}

	return (n);
}
