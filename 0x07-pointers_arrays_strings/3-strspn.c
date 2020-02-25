#include "holberton.h"
/**
 * _strspn - check the code for Holberton School students.
 *@s: memory area
 *@accept: another memory area
 *Return: always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c, ch, counter = 0;

	for (c = 0; s[c]; c++)
	{
		for (ch = 0; accept[ch]; ch++)
		{
			if (s[c] == accept[ch])
				counter++;
		}
		if (counter < c)
			break;
	}
	return (counter);
}
