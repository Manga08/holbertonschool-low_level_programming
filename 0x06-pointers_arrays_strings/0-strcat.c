#include "holberton.h"
/**
 * _strcat - check the code for Holberton School students.
 *@dest: the variable
 *@src: another variable
 *Return: dest
 */
char *_strcat(char *dest, char *src)
{
	char *c = dest;

	while (*dest)
		dest++;

	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (c);
}
