#include "holberton.h"
/**
 *_isalpha - Entry point
 *@c: tell the uppercase or lowercase
 *
 *Return: Returns 0 upon successful run.
 */
int _isalpha(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	else if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
