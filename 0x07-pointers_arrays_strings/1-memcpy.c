#include "holberton.h"
/**
 * _memcpy - check the code for Holberton School students.
 *@src: memory area
 *@dest: another memory area
 *@n: byte form memory aarea of src
 *Return: always 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
	{
		dest[c] = src[c]
	}
	return (dest);
}
