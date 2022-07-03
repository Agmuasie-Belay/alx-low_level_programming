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

	  while (c <= 'z')
	  {
		  if (c == 'q' || c == 'e')
		  {
		  	continue;
		  }
		  else
		  {
			  putchar(c);
		  }
		  c++;
	  }
	putchar('\n');
	return (0);
}
