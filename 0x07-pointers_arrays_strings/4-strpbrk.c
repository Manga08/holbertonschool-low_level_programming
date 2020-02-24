#include "holberton.h"
/**
 * _memcpy - check the code for Holberton School students.
 *@src: memory area
 *@dest: another memory area
 *@n: byte form memory aarea of src
 *Return: always 0
 */
 #include <stdio.h>
char *_strpbrk(char *s, char *accept)
{
    unsigned int c, ch;

    for (c = 0; s[c]; c++)
    {
        for (ch = 0; accept [ch]; ch++)
        {
            if (s[c] == accept [ch] )
            return(s + c);
        }
    if (s == c)
        return(s + c);
    }
}
