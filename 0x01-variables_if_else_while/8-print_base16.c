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

	while (c <= 57)
	{
	putchar(c);
	c++;
	}
	c = 97;
	while (c <= 102)
	{
	putchar((char)c);
	c++;
	}
	putchar('\n');
	return (0);
}
