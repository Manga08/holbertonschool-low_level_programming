#include "holberton.h"
/**
 * _memset - check the code for Holberton School students.
 *@n: bytes of the memory area
 *@s: the pointer
 *@b: the constant byte
 *Return: always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0; c <= n; c++)
	{
		 s[c] = b;
	}
	return (s);
}
