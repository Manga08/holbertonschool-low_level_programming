#include "holberton.h"
/**
 * _strncpy - check the code for Holberton School students.
 *@dest: the variable
 *@src: another variable
 *@n: another another variable
 *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c = 0;

	for (c = 0; c < n && src[c] != '\0'; c++)
		dest[c] = src[c];
	for ( ; c < n; c++)
		dest[c] = '\0';
	return (dest);
}
