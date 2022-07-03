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
	int k;

	for (i = 48; i <= 57; i++)
	for (j = i; j <= 57; j++)
	{
	if (i == j)
		continue;
	for (k = j; k <= 57; k++)
	{
	putchar(i);
	putchar(j);
	putchar(k);
	if (i == 55 && j == 56 && k == 57)
		break;
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
