#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	  char c = 'a';
	  char d = 'A';

	  while (c <= 'z')
	  {
		  if (c != 'q' || c != 'e')
		  	putchar(c);
		  c++;
	  }
	  while (d <= 'Z')
	  {
		  putchar(d);
		  d++;
	  }
	return (0);
}
