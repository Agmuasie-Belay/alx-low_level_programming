#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	for (c = 122; c >= 65; c--)
	{
	putchar((char)c);
	c++;
	}
	putchar('\n');
	return (0);
}

