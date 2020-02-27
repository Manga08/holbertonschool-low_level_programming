#include "holberton.h"
/**
 * wildcmp - check the code for Holberton School students.
 *@s1:The letter
 *@s2:The second variable
 *Return: always 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == 0 && *s2 == 0)
		return (1);
	else if (*s1 == 0 && *(s2 + 1) != 0 && *s2 == '*')
		return (0);
	else if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}
