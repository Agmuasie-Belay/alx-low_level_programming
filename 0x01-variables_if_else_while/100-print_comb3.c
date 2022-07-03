#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	int j = 1;

	for (i = 48; i<=57; i++)
	for (j = i; j <= 57; j++)
	{
	if (i == j)
		continue;
	putchar(i);
	putchar(j);
	if (i == 56 && j == 57)
		break;
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
