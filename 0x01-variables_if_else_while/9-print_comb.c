#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = 48;

	while (c <= 100)
	{
	putchar(c);
  putchar(',');
  putchar('\t');
	c++;
	}
	putchar('\n');
	return (0);
}
