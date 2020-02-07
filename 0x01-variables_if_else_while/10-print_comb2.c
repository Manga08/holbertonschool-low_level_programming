#include <stdio.h>
/**
 * main - Print numbers from 00 to 99
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  int ch;
  int c;

  for (ch = 0; ch <= 9; ch++)
    {
      for (c = 0; c <= 9; c++)
	{
	  putchar(ch + '0');
	  putchar(c + '0');

	  if (!(ch == 9 && c == 9))
	    {
	      putchar(',');
	      putchar(' ');
	    }
	}
    }
  putchar(10);

  return (0);
}
