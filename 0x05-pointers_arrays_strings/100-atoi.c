#include "holberton.h"
/**
 * _atoi - check the code for Holberton School students.
 *@s: the variable
 *Return: num and sign
 */
int _atoi(char *s)
{
	int c = 0, ch = 1;
	unsigned int k = 0;

	while (s[c] != '\0')
	{
		if ((s[c] < '0' || s[c] > '9') && (s[c] == '-'))
		{
			ch = ch * -1;
		}
		else if ((s[c] >= '0' && s[c] <= '9'))
		{
			k = k * 10 + (s[c] - '0');
			if ((s[c + 1] < '0' || s[c + 1] > '9'))
			{
				break;
			}
		}
		c++;
	}
	return (k * ch);
}
