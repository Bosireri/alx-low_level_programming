#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpa;

	for (alpa = 'a' ; alpa <= 'z' ; alpa++)
		putchar(alpa);
	for (alpa = 'A' ; alpa <= 'Z' ; alpa++)
		putchar(alpa);
	putchar('\n');
	return (0);
}
