#include "holberton.h"
/**
 * _strpbrk - check the code for Holberton School students.
 *@s: memory area
 *@accept: another memory area
 *Return: always 0
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int c, ch;

	for (c = 0; s[c]; c++)
	{
		for (ch = 0; accept[ch]; ch++)
		{
			if (accept[ch] == s[c])
				return (s + c);
		}
		if (accept[ch] == s[c])
			return (s + c);
	}
	return (0);
}
