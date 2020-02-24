#include "holberton.h"
/**
 * _memcpy - check the code for Holberton School students.
 *@src: memory area
 *@dest: another memory area
 *@n: byte form memory aarea of src
 *Return: always 0
 */
 unsigned int _strspn(char *s, char *accept)
{
    unsigned int c, ch, counter = 0;

    for (c = 0; s[c]; c++)
    {
        for (ch = 0; accept [ch]; ch++)
        {
            if (s[c] == accept [ch] )
            counter++;
        }
        if (counter < c)
        break;
    }
    return (counter);
}
