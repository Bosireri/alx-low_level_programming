#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char alpa;

	for (i = '0' ; i <= '9' ; i++)
	putchar(i);
	for (alpa = 'a' ; alpa <= 'f' ; alpa++)
	putchar(alpa);
	putchar('\n');
	return (0);
}
