#include "holberton.h"
#include <stdio.h>
/**
 * _strstr - check the code for Holberton School students.
 *@haystack: memory area
 *@needle: another memory area
 *Return: always 0
 */
char *_strstr(char *haystack, char *needle)
{
	char *c, *ch;

	while (*haystack != '\0')
	{
		c = haystack;
		ch = needle;

		while (*ch == *haystack && *ch != '\0'
		       && *haystack != '\0')
		{
			haystack++;
			ch++;
		}
		if (*ch == '\0')
			return (c);
		haystack = c + 1;
	}
	return (NULL);
}
