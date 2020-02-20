#include "holberton.h"
/**
 * _strcat - check the code for Holberton School students.
 *@dest: the variable
 *@src: another variable
 *@n: another another variable
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{

	int c = 0, ch = 0, k = 0;

	while (dest[c] != '\0')
	{
		c++;
	}
	while (src[ch] != '\0')
	{
		ch++;
	}

	while (k <= ch)
	{
		if (n > 0)
		{
			dest[c] = src[k];
			k++;
			c++;
			n--;
		}
		else
		{
			break;
		}
	}
	return (dest);
}
