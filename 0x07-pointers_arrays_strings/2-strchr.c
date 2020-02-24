#include "holberton.h"
/**
 * _strchr - check the code for Holberton School students.
 *@s: memory area
 *@c: another memory area
 *Return: always 0
 */
char *_strchr(char *s, char c)
{
	unsigned int ch;

	for (ch = 0; *s != '\0'; ch++)
	{
		if (*s == c)
			return(s);
			s++;
	}
	if(c == '\0')
	{
	return (s);
	}
	else
		return (NULL);
}
